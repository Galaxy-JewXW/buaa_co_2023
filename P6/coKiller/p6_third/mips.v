`timescale 1ns / 1ps

`define Rs 25:21
`define Rt 20:16
`define Rd 15:11
`define imm 15:0
`define imm_j 25:0

`include "sfu.v"
`include "ifu.v"
`include "if_id.v"
`include "grf.v"
`include "ext.v"
`include "cmp.v"
`include "id_ex.v"
`include "alu.v"
`include "ex_me.v"
`include "dm.v"
`include "me_wb.v"
`include "mdu.v"
`include "load_ext.v"

module mips(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,

    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3:0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);

    //mips_io
    wire [31:0] PC_F, Instr_F, dmRead_M, dmOut_M, PC_M, PC_W, forRt_M, aluOut_M, RegData_W;
    wire [4:0] RegAddr_W;
    wire [3:0] ByteEn;
    wire RegWrite;
    assign i_inst_addr = PC_F;
    assign Instr_F = i_inst_rdata;

    assign dmRead_M = m_data_rdata;
    assign m_data_byteen = ByteEn;
    assign m_inst_addr = PC_M;
    assign m_data_wdata = (ByteEn == 4'b1100) ? {{forRt_M[15:0]},16'b0} : 
                          (ByteEn == 4'b0011) ? {16'b0,{forRt_M[15:0]}} :
						  (ByteEn == 4'b0001) ? {24'b0,{forRt_M[7:0]}} :
						  (ByteEn == 4'b0010) ? {16'b0,{forRt_M[7:0]},8'b0} :
						  (ByteEn == 4'b0100) ? {8'b0,{forRt_M[7:0]},16'b0} :
						  (ByteEn == 4'b1000) ? {{forRt_M[7:0]},24'b0} :
                          forRt_M;	
    assign m_data_addr = aluOut_M;
    
    assign w_grf_we = RegWrite;
    assign w_grf_addr = RegAddr_W;
    assign w_grf_wdata = RegData_W;
    assign w_inst_addr = PC_W;

    //sfu
    wire [31:0] Instr_D, Instr_E, Instr_M, Instr_W;
    wire Stall;
    wire [2:0] rsFsel_D, rtFsel_D, rsFsel_E, rtFsel_E, rtFsel_M;
	wire [31:0] forRs_D, forRt_D, forRs_E, forRt_E;
	wire Bcd_cmp_D, Bcd_cmp_E, Bcd_cmp_M, Bcd_cmp_W;
    wire Busy, Start;
	 
    sfu sfu1(.Instr_D(Instr_D), .Instr_E(Instr_E), .Instr_M(Instr_M), .Instr_W(Instr_W), .Busy(Busy), .Start(Start), .Bcd_cmp_E(Bcd_cmp_E), .Bcd_cmp_M(Bcd_cmp_M), .Bcd_cmp_W(Bcd_cmp_W),
    .Stall(Stall), .rsFsel_D(rsFsel_D), .rtFsel_D(rtFsel_D), .rsFsel_E(rsFsel_E), .rtFsel_E(rtFsel_E), .rtFsel_M(rtFsel_M));
   
    //ifu
    wire [31:0] npc;	 

    ifu ifu1(.clk(clk), .reset(reset), .npc(npc), .WE(~Stall), .PC(PC_F));

    //if_id
    wire [31:0] PC_D, PC_D4, PC_D8;
    wire [1:0] ExtOp;
	wire [2:0] pcSrc;

    if_id if_id1(.reset(reset), .clk(clk), .WE(~Stall), .PC_F(PC_F), .Instr_F(Instr_F), .Bcd_cmp_D(Bcd_cmp_D),
    .PC_D(PC_D), .PC_D4(PC_D4), .PC_D8(PC_D8), .Instr_D(Instr_D), .pcSrc(pcSrc), .ExtOp(ExtOp));

    //grf
    wire [31:0] grf_o1;
    wire [31:0] grf_o2;

    grf grf1(.clk(clk), .reset(reset), .RegWrite(RegWrite), .Rs(Instr_D[`Rs]), .Rt(Instr_D[`Rt]),
    .RegAddr(RegAddr_W), .RegData(RegData_W), .o1(grf_o1), .o2(grf_o2));

    //ext
    wire [31:0] immExt_D;
    ext ext1(.imm(Instr_D[`imm]), .EOp(ExtOp), .ext(immExt_D));    
                     
    //cmp
    wire Beq_cmp, Bne_cmp;
    cmp cmp_d(.R1(forRs_D), .R2(forRt_D), .Beq_cmp(Beq_cmp), .Bne_cmp(Bne_cmp), .Bcd_cmp(Bcd_cmp_D));

    //npc
    wire [31:0] imm_jal_D, imm_jr_D;
    assign imm_jal_D = {{PC_D4[31:28]}, Instr_D[`imm_j], {2'b00}};
    assign imm_jr_D = forRs_D;

    assign npc = (pcSrc == 3'b001 && Beq_cmp == 1) ? ((immExt_D << 2) + PC_D4) :
      /* jal */  (pcSrc == 3'b010) ? imm_jal_D :
      /* jr */   (pcSrc == 3'b011 ) ? imm_jr_D : 
				 (pcSrc == 3'b100 && Bcd_cmp_D == 1) ? ((immExt_D << 2) + PC_D4) :
                 (pcSrc == 3'b101 && Bne_cmp == 1) ? ((immExt_D << 2) + PC_D4) :
				 PC_F + 4;

    //id_ex
    wire [31:0] PC_E, PC_E4, PC_E8;
    wire [31:0] rsData_E, rtData_E, immExt_E;
    wire [3:0] ALUOp, MDUOp;
    wire ALUSrc;

    id_ex id_ex1(.reset(reset || Stall), .clk(clk), .PC_D(PC_D), .PC_D4(PC_D4), .PC_D8(PC_D8),
    .Instr_D(Instr_D), .rsData_D(forRs_D), .rtData_D(forRt_D), .immExt_D(immExt_D),
    .PC_E(PC_E), .PC_E4(PC_E4), .PC_E8(PC_E8), .Instr_E(Instr_E), .rsData_E(rsData_E), .rtData_E(rtData_E),
    .immExt_E(immExt_E), .ALUOp(ALUOp), .ALUSrc(ALUSrc), .Bcd_cmp_D(Bcd_cmp_D), .Bcd_cmp_E(Bcd_cmp_E), .MDUOp(MDUOp));
    
    //alu
    wire [31:0] aluIn2, aluOut_E;
    assign aluIn2 = (ALUSrc == 1'b1) ? immExt_E : forRt_E;

    alu alu1(.R1(forRs_E), .R2(aluIn2), .ALUOp(ALUOp), .Rout(aluOut_E));

    //mdu
    wire [31:0] Hi, Lo;
    assign Start = (MDUOp >= 1) && (MDUOp <= 4);
    
    mdu mdu1(.reset(reset), .clk(clk), .R1(forRs_E), .R2(forRt_E), .MDUOp(MDUOp),
    .Busy(Busy), .Hi(Hi), .Lo(Lo));

    wire [31:0] ex_out;
    assign ex_out = (MDUOp == 5) ? Hi :
                    (MDUOp == 6) ? Lo :
                    aluOut_E;

    //ex_me
    wire [31:0] PC_M4, PC_M8;
    wire [31:0] rtData_M;
    wire [1:0] Load_extOp;

    ex_me ex_me1(.reset(reset), .clk(clk), .PC_E(PC_E), .PC_E4(PC_E4), .PC_E8(PC_E8),
    .Instr_E(Instr_E), .rtData_E(forRt_E), .aluOut_E(ex_out), .PC_M(PC_M), .PC_M4(PC_M4), .PC_M8(PC_M8), .Instr_M(Instr_M), .rtData_M(rtData_M), .aluOut_M(aluOut_M), 
    .ByteEn(ByteEn), .Load_extOp(Load_extOp), .Bcd_cmp_E(Bcd_cmp_E), .Bcd_cmp_M(Bcd_cmp_M));    

    //dm

    //load_ext
    load_ext load_ext1(.DataIn(dmRead_M), .Load_extOp(Load_extOp), .byte(aluOut_M[1:0]), .DataOut(dmOut_M));

    //me_wb
    wire [31:0] PC_W4, PC_W8;
    wire [31:0] rtData_W, aluOut_W, dmOut_W;
    wire [1:0] MemtoReg, RegDst;

    me_wb me_wb1(.reset(reset), .clk(clk), .PC_M(PC_M), .PC_M4(PC_M4), .PC_M8(PC_M8),
    .Instr_M(Instr_M), .rtData_M(forRt_M), .aluOut_M(aluOut_M), .dmOut_M(dmOut_M), .PC_W(PC_W), .PC_W4(PC_W4), .PC_W8(PC_W8),
    .Instr_W(Instr_W), .rtData_W(rtData_W), .aluOut_W(aluOut_W), .dmOut_W(dmOut_W), 
    .MemtoReg(MemtoReg), .RegWrite(RegWrite), .RegDst(RegDst), .Bcd_cmp_M(Bcd_cmp_M), .Bcd_cmp_W(Bcd_cmp_W));

    assign RegAddr_W = (RegDst == 2'b00) ? Instr_W[`Rd] :
                       (RegDst == 2'b10) ? 5'b11111 :
                       Instr_W[`Rt]; 

    assign RegData_W = (MemtoReg == 2'b01) ? dmOut_W :
                       (MemtoReg == 2'b10) ? PC_W8 :
                       aluOut_W;
							  
	//Forward_D    
    assign forRs_D = (rsFsel_D == 1) ? PC_E8 :
                     (rsFsel_D == 2) ? aluOut_M :
                     (rsFsel_D == 3) ? PC_M8 :
                     (rsFsel_D == 4) ? RegData_W :
                     (rsFsel_D == 5) ? PC_W8 :
                     grf_o1; 
    assign forRt_D = (rtFsel_D == 1) ? PC_E8 :
                     (rtFsel_D == 2) ? aluOut_M :
                     (rtFsel_D == 3) ? PC_M8 :
                     (rtFsel_D == 4) ? RegData_W :
                     (rtFsel_D == 5) ? PC_W8 :
                     grf_o2;

	//Forward_E    
    assign forRs_E = (rsFsel_E == 2) ? aluOut_M :
                     (rsFsel_E == 3) ? PC_M8 :
                     (rsFsel_E == 4) ? RegData_W :
                     (rsFsel_E == 5) ? PC_W8 :
                     rsData_E; 
    assign forRt_E = (rtFsel_E == 2) ? aluOut_M :
                     (rtFsel_E == 3) ? PC_M8 :
                     (rtFsel_E == 4) ? RegData_W :
                     (rtFsel_E == 5) ? PC_W8 :
                     rtData_E;
							
	//Forward_M   
    assign forRt_M = (rtFsel_M == 4) ? RegData_W :
                     (rtFsel_M == 5) ? PC_W8 :
                     rtData_M;    					
							
endmodule