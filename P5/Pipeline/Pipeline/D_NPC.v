`timescale 1ns / 1ps
`include "def.v"

module D_NPC(
    input [2:0] NPCOp,
    input [31:0] D_PC,
    input [31:0] F_PC,
    input b_jump,
    input [25:0] imm26,
    input [15:0] imm16,
    input [31:0] re,
    output [31:0] NPC
    );
    assign NPC = (NPCOp == `NPC_jr_jalr) ? re :
                 (NPCOp == `NPC_b && b_jump) ? D_PC + 4 + {{14{imm16[15]}}, imm16, 2'b00} :
                 (NPCOp == `NPC_j_jal) ? {D_PC[31:28], imm26, 2'b00} :
                 F_PC + 4;

endmodule
