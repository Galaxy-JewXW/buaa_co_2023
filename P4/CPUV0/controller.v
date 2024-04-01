`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:12 10/31/2023 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input [5:0] opcode,
    input [5:0] funct,
    input ALUflag_zero,
    output [1:0] A3Sel,
    output [2:0] ALUOp,
    output ALUBSel,
    output [1:0] WDSel,
    output RegWrite,
    output MemWrite,
    output [1:0] PCSel,
    output EXTOp,
    output [1:0] DMOp
    );


// parameter of funct, for R-type instructions.
parameter ADD  = 6'b100000,
          SUB  = 6'b100010,
          JR   = 6'b001000,
          ZERO = 6'b000000;

// parameter of opcode, for I-type and J-type instructions.
// I-Type
parameter ORI  = 6'b001101,
          LW  = 6'b100011,
          SW  = 6'b101011,
          BEQ = 6'b000100,
          LUI = 6'b001111,
          JAL = 6'b000011;

// J-Type
parameter J = 6'b000010;


// identify instruction
wire zero, add, sub, ori, lw, sw, beq, lui, jal, jr, j;
// wire lb, sb, lh, sh;

// R
assign zero = (opcode == ZERO);
assign add = (zero && (funct == ADD));
assign sub = (zero && (funct == SUB));
assign jr = (zero && (funct == JR));

// I and J
assign ori = (opcode == ORI);
assign lw = (opcode == LW);
assign sw = (opcode == SW);
assign beq = (opcode == BEQ);
assign lui = (opcode == LUI);
assign jal = (opcode == JAL);
assign j = (opcode == J);


assign A3Sel = (ori || lw || lui) ? `A3Sel_rt :
               (add || sub) ? `A3Sel_rd : 
               jal ? `A3Sel_ra : 2'b00;

assign ALUOp = (lw || sw || add) ? `ALU_add :
               (sub || beq) ? `ALU_sub :
               ori ? `ALU_or :
               lui ? `ALU_lui : 3'b000;

assign ALUBSel = (lw || sw || lui || ori);

assign WDSel = (add || sub || ori || lui) ? `WDSel_aluans :
               (lw) ? `WDSel_dmrd :
               (jal) ? `WDSel_PCa4 : 2'b00;

assign RegWrite = (add || sub || ori || lui || jal || lw);

assign MemWrite = (sw);

assign PCSel = (beq && ALUflag_zero) ? `PCSel_branch :
               (jal || j) ? `PCSel_j :
               (jr) ? `PCSel_jr : `PCSel_PCa4;

assign EXTOp = (lw || sw);

assign DMOp = (lw || sw) ? `DM_word : 2'b00;
endmodule
