`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:22 11/08/2023 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);

wire [31:0] F_PC;
wire [31:0] D_PC;
wire [31:0] E_PC;
wire [31:0] M_PC;
wire [31:0] W_PC;

wire [31:0] F_Instr;
wire [31:0] D_Instr;
wire [31:0] E_Instr;
wire [31:0] M_Instr;
wire [31:0] W_Instr;

wire E_MDU_start;
wire E_MDU_busy;

// Level F declares
wire [31:0] next_PC;
wire IFU_WE;


// stall handle controller
wire stall;
assign FD_WE = !stall;
assign IFU_WE = !stall;
assign DE_flush = stall;

assign DE_WE = 1'b1;
assign EM_WE = 1'b1;
assign MW_WE = 1'b1;

assign FD_flush = 1'b0;
assign EM_flush = 1'b0;
assign MW_flush = 1'b0;


stall_handle Stall_Handle(
    .D_instr(D_Instr),
    .E_instr(E_Instr),
    .M_instr(M_Instr),
    .E_MDU_busy(E_MDU_busy),
    .E_MDU_start(E_MDU_start),
    .stall(stall)
);


// Level F
ifu F_IFU(
    .clk(clk),
    .reset(reset),
    .enable(IFU_WE),
    .next_pc(next_PC),
    .pc(F_PC)
);

assign F_Instr = i_inst_rdata;
assign i_inst_addr = F_PC;


fd F_D(
    .clk(clk),
    .reset(reset),
    .flush(FD_flush),
    .enable(FD_WE),
    .F_pc(F_PC),
    .F_instr(F_Instr),
    .D_pc(D_PC),
    .D_instr(D_Instr)
);



// Level D
wire [4:0] D_rs;
wire [4:0] D_rt;
wire [31:0] D_gpr_rs;
wire [31:0] D_gpr_rt;
wire [15:0] D_offset;
wire [25:0] D_imm;

wire [2:0] D_CMPOp;
wire [2:0] D_PCSel;
wire D_EXTOp;

wire [31:0] D_extres;

controller D_controller(
    .instr(D_Instr),
    .rs(D_rs),
    .rt(D_rt),
    .offset(D_offset),
    .imm(D_imm),
    .CMPOp(D_CMPOp),
    .PCSel(D_PCSel),
    .EXTOp(D_EXTOp)
);


wire [4:0] W_A3Sel;
wire [31:0] W_grfWD;
grf D_GRF(
    .clk(clk),
    .reset(reset),
    .A1(D_rs),
    .A2(D_rt),
    .A3(W_A3Sel),
    .WD(W_grfWD),
    .WPC(W_PC),
    .RD1(D_gpr_rs),
    .RD2(D_gpr_rt)
);

wire [31:0] D_fwd_gprrs;
wire [31:0] D_fwd_gprrt;

assign D_fwd_gprrs = (D_rs == 5'd0) ? (32'd0) : 
                    (D_rs == E_A3Sel) ? E_grfWD :
                    (D_rs == M_A3Sel) ? M_grfWD : D_gpr_rs;

assign D_fwd_gprrt = (D_rt == 5'd0) ? (32'd0) : 
                    (D_rt == E_A3Sel) ? E_grfWD :
                    (D_rt == M_A3Sel) ? M_grfWD : D_gpr_rt;

wire branch_flag;
cmp D_CMP(
    .gpr_rs(D_fwd_gprrs),
    .gpr_rt(D_fwd_gprrt),
    .CMPOp(D_CMPOp),
    .flag(branch_flag)
);

npc D_NPC(
    .F_pc(F_PC),
    .D_pc(D_PC),
    .PCSel(D_PCSel),
    .branch(branch_flag),
    .imm(D_imm),
    .offset(D_offset),
    .ra(D_fwd_gprrs),
    .next_pc(next_PC)
);


ext D_EXT(
    .num(D_offset),
    .EXTOp(D_EXTOp),
    .result(D_extres)
);

wire [31:0] E_extres;
wire [31:0] E_gpr_rs;
wire [31:0] E_gpr_rt;

de D_E(
    .clk(clk),
    .reset(reset),
    .flush(DE_flush),
    .enable(DE_WE),
    .D_pc(D_PC),
    .D_instr(D_Instr),
    .D_extres(D_extres),
    .D_gpr_rs(D_fwd_gprrs),
    .D_gpr_rt(D_fwd_gprrt),
    .E_pc(E_PC),
    .E_instr(E_Instr),
    .E_extres(E_extres),
    .E_gpr_rs(E_gpr_rs),
    .E_gpr_rt(E_gpr_rt)
);



// Level E
wire [4:0] E_rs;
wire [4:0] E_rt;
wire [3:0] E_ALUOp;
wire E_ALUBSel;
wire [4:0] E_A3Sel;
wire [1:0] E_WDSel;
wire [2:0] E_MDUOp;


controller E_controller(
    .instr(E_Instr),
    .rs(E_rs),
    .rt(E_rt),
    .A3Sel(E_A3Sel),
    .WDSel(E_WDSel),
    .ALUOp(E_ALUOp),
    .ALUBSel(E_ALUBSel),
    .MDUOp(E_MDUOp),
    .MDU_start(E_MDU_start)
);

wire [31:0] E_fwd_gprrs;
wire [31:0] E_fwd_gprrt;

assign E_fwd_gprrs = (E_rs == 5'd0) ? 32'd0 :
                    (E_rs == M_A3Sel) ? M_grfWD :
                    (E_rs == W_A3Sel) ? W_grfWD :
                    E_gpr_rs;

assign E_fwd_gprrt = (E_rt == 5'd0) ? 32'd0 :
                    (E_rt == M_A3Sel) ? M_grfWD :
                    (E_rt == W_A3Sel) ? W_grfWD :
                    E_gpr_rt;

wire [31:0] E_ALU_A;
wire [31:0] E_ALU_B;
wire [31:0] E_aluans;

assign E_ALU_A = E_fwd_gprrs;
assign E_ALU_B = (E_ALUBSel == `ALUBSel_imm) ? E_extres : E_fwd_gprrt;

alu E_ALU(
    .A(E_ALU_A),
    .B(E_ALU_B),
    .ALUOp(E_ALUOp),
    .result(E_aluans)
);

wire [31:0] E_mduans;
wire [31:0] E_mduhi;
wire [31:0] E_mdulo;

mdu E_mdu(
    .clk(clk),
    .reset(reset),
    .MDUOp(E_MDUOp),
    .gpr_rs(E_fwd_gprrs),
    .gpr_rt(E_fwd_gprrt),
    .start(E_MDU_start),
    .busy(E_MDU_busy),
    .HI(E_mduhi),
    .LO(E_mdulo)
);

assign E_mduans = (E_MDUOp == `MDU_mfhi) ? E_mduhi :
                  (E_MDUOp == `MDU_mflo) ? E_mdulo :
                  32'b0;

wire [31:0] E_grfWD;
assign E_grfWD = (E_WDSel == `WDSel_PCa8) ? (E_PC + 8) : 32'd0;

wire [31:0] M_aluans;
wire [31:0] M_gpr_rt;
wire [31:0] M_mduans;

em E_M(
    .clk(clk),
    .reset(reset),
    .flush(EM_flush),
    .enable(EM_WE),
    .E_pc(E_PC),
    .E_instr(E_Instr),
    .E_aluans(E_aluans),
    .E_gpr_rt(E_fwd_gprrt),
    .E_mduans(E_mduans),
    .M_pc(M_PC),
    .M_instr(M_Instr),
    .M_aluans(M_aluans),
    .M_gpr_rt(M_gpr_rt),
    .M_mduans(M_mduans)
);



// Level M
wire [4:0] M_rt;
wire [4:0] M_A3Sel;
wire [1:0] M_WDSel;
wire M_MemWrite;
wire [2:0] M_DMOp;

controller M_controller(
    .instr(M_Instr),
    .rt(M_rt),
    .A3Sel(M_A3Sel),
    .WDSel(M_WDSel),
    .MemWrite(M_MemWrite),
    .DMOp(M_DMOp)
);

wire [31:0] M_fwd_gprrt;
assign M_fwd_gprrt = (M_rt == 5'd0) ? (5'd0) :
                    (M_rt == W_A3Sel) ? W_grfWD :
                    M_gpr_rt;

wire [31:0] M_dmrd;
assign m_inst_addr = M_PC;
assign m_data_addr = M_aluans;

toRAM M_Store(
    .A(M_aluans),
    .gpr_rt(M_fwd_gprrt),
    .DMOp(M_DMOp),
    .MemWrite(M_MemWrite),
    .m_data_byteen(m_data_byteen),
    .m_data_wdata(m_data_wdata)
);

fromRAM M_Load(
    .A(M_aluans),
    .DMOp(M_DMOp),
    .m_data_rdata(m_data_rdata),
    .RD(M_dmrd)
);

wire [31:0] M_grfWD;
assign M_grfWD = (M_WDSel == `WDSel_aluans) ? M_aluans :
                (M_WDSel == `WDSel_mduans) ? M_mduans :
                (M_WDSel == `WDSel_PCa8) ? (M_PC + 8) : 32'd0;

wire [31:0] W_aluans;
wire [31:0] W_dmrd;
wire [31:0] W_mduans;

mw M_W(
    .clk(clk),
    .reset(reset),
    .flush(MW_flush),
    .enable(MW_WE),
    .M_pc(M_PC),
    .M_instr(M_Instr),
    .M_aluans(M_aluans),
    .M_dmrd(M_dmrd),
    .M_mduans(M_mduans),
    .W_pc(W_PC),
    .W_instr(W_Instr),
    .W_aluans(W_aluans),
    .W_dmrd(W_dmrd),
    .W_mduans(W_mduans)
);



// Level W
wire [1:0] W_WDSel;

controller W_controller(
    .instr(W_Instr),
    .A3Sel(W_A3Sel),
    .WDSel(W_WDSel)
);

assign w_grf_we = (W_A3Sel != 5'b0);
assign w_grf_wdata = W_grfWD;
assign w_inst_addr = W_PC;
assign w_grf_addr = W_A3Sel;

assign W_grfWD = (W_WDSel == `WDSel_aluans) ? W_aluans :
                (W_WDSel == `WDSel_dmrd) ? W_dmrd :
                (W_WDSel == `WDSel_mduans) ? W_mduans :
                (W_WDSel == `WDSel_PCa8) ? (W_PC + 8) : 32'd0;

endmodule
