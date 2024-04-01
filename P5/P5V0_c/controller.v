`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:09 11/08/2023 
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
    input [31:0] instr,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] offset,
    output [25:0] imm,
    output [4:0] A3Sel,
    output [1:0] WDSel,
    output [2:0] ALUOp,
    output ALUBSel,
    output MemWrite,
    output [1:0] PCSel,
    output EXTOp,
    output [1:0] CMPOp,
    output [1:0] DMOp,
    output R_type_calc,
    output I_type_calc,
    output branch,
    output link,
    output load,
    output store,
    output jump_to_addr,
    output jump_to_reg
    );

wire [5:0] opcode; 
wire [5:0] funct; 

assign opcode = instr[31:26];
assign funct = instr[5:0];
assign rs = instr[25:21];
assign rt = instr[20:16];
assign rd = instr[15:11];
assign offset = instr[15:0];
assign imm = instr[25:0];

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
          JAL = 6'b000011,
          LB  = 6'b100000,
          SB  = 6'b101000,
          LH  = 6'b100001,
          SH  = 6'b101001;

// J-Type
parameter J = 6'b000010;


// identify instruction
wire zero, add, sub, ori, lw, sw, beq, lui, jal, jr, j;
wire lb, sb, lh, sh;

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
assign lb = (opcode == LB);
assign sb = (opcode == SB);
assign lh = (opcode == LH);
assign sh = (opcode == SH);

// classify
assign R_type_calc = add | sub;
assign I_type_calc = ori | lui;
assign branch = beq;
assign link = jal;
assign load = lw | lb | lh;
assign store = sw | sb | sh;
assign jump_to_addr = j | jal;
assign jump_to_reg = jr;

assign A3Sel = (R_type_calc) ? rd :
                (I_type_calc | load) ? rt :
                (link) ? 5'd31 : 5'd0;

assign WDSel = (R_type_calc | I_type_calc) ? `WDSel_aluans :
                (load) ? `WDSel_dmrd :
                (link) ? `WDSel_PCa8 : `WDSel_aluans;

assign ALUOp = (lw || sw || add) ? `ALU_add :
               (sub || beq) ? `ALU_sub :
               ori ? `ALU_or :
               lui ? `ALU_lui : `ALU_add;

assign ALUBSel = (R_type_calc) ? `ALUBSel_grf :
                (I_type_calc | load | store) ? `ALUBSel_imm : `ALUBSel_grf;

assign MemWrite = (store);

assign PCSel = (branch) ? `PCSel_branch :
                (jump_to_addr) ? `PCSel_j :
                (jump_to_reg) ? `PCSel_jr : `PCSel_PCa4;

assign EXTOp = (load | store) ? `EXT_signed : `EXT_zero;

assign CMPOp = (beq) ? `CMP_beq : 2'b00;

assign DMOp = (lw || sw) ? `DM_word :
              (lb || sb) ? `DM_byte :
              (lh || sh) ? `DM_halfword : 2'b00;

endmodule
