`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:15:59 10/31/2023 
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
    input reset
    );

wire [31:0] Instr;
wire [31:0] PC;
wire [31:0] PCa4;
wire [31:0] jr_reg;
wire [15:0] offset;
wire [25:0] imm;

wire [5:0] opcode;
wire [5:0] funct;
wire [4:0] rs;
wire [4:0] rt;
wire [4:0] rd;

wire [1:0] A3Sel;
wire [2:0] ALUOp;
wire ALUBSel;
wire [1:0] WDSel;
wire RegWrite;
wire MemWrite;
wire [1:0] PCSel;
wire EXTOp;
wire [1:0] DMOp;

wire ALUflag_zero;

assign opcode = Instr[31:26];
assign funct = Instr[5:0];
assign rs = Instr[25:21];
assign rt = Instr[20:16];
assign rd = Instr[15:11];
assign imm = Instr[25:0];
assign offset = Instr[15:0];

ifu IFU(
    .clk(clk),
    .reset(reset),
    .PCSel(PCSel),
    .offset(offset),
    .imm(imm),
    .jr_reg(jr_reg),
    .PC(PC),
    .PCa4(PCa4),
    .Instr(Instr)
);

controller Controller(
    .opcode(opcode),
    .funct(funct),
    .ALUflag_zero(ALUflag_zero),
    .A3Sel(A3Sel),
    .ALUOp(ALUOp),
    .ALUBSel(ALUBSel),
    .WDSel(WDSel),
    .RegWrite(RegWrite),
    .MemWrite(MemWrite),
    .PCSel(PCSel),
    .EXTOp(EXTOp),
    .DMOp(DMOp)
);


wire [4:0] A3;
wire [31:0] grf_WD;
wire [31:0] grf_RD1;
wire [31:0] grf_RD2;

assign A3 = (A3Sel == `A3Sel_rt) ? rt :
            (A3Sel == `A3Sel_rd) ? rd :
            (A3Sel == `A3Sel_ra) ? 32'd31 : 2'b00;

assign grf_WD = (WDSel == `WDSel_aluans) ? ALU_ans :
            (WDSel == `WDSel_dmrd) ? DM_rd :
            (WDSel == `WDSel_PCa4) ? PCa4 : 2'b00;

grf GRF(
    .clk(clk),
    .reset(reset),
    .WE(RegWrite),
    .A1(rs),
    .A2(rt),
    .A3(A3),
    .WD(grf_WD),
    .WPC(PC),
    .RD1(grf_RD1),
    .RD2(grf_RD2)
);


wire [31:0] EXT_ans;

ext EXT(
    .num(offset),
    .EXTOp(EXTOp),
    .result(EXT_ans)
);


wire [31:0] ALU_A;
wire [31:0] ALU_B;
wire [31:0] ALU_ans;

assign ALU_A = grf_RD1;
assign ALU_B = (ALUBSel == `ALUBSel_grf) ? grf_RD2 :
               (ALUBSel == `ALUBSel_imm) ? EXT_ans : 32'b0;
assign jr_reg = grf_RD1;

alu ALU(
    .A(ALU_A),
    .B(ALU_B),
    .ALUOp(ALUOp),
    .zero(ALUflag_zero),
    .result(ALU_ans)
);


wire [31:0] DM_rd;
dm DM(
    .clk(clk),
    .reset(reset),
    .A(ALU_ans),
    .WD(grf_RD2),
    .WE(MemWrite),
    .DMOp(DMOp),
    .WPC(PC),
    .RD(DM_rd)
);

endmodule
