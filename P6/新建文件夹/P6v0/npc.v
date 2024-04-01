`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:51 11/07/2023 
// Design Name: 
// Module Name:    npc 
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
module npc(
    input [31:0] F_pc,
    input [31:0] D_pc,
    input [2:0] PCSel,
    input branch,
    input [25:0] imm,
    input [15:0] offset,
    input [31:0] ra,
    output [31:0] next_pc
    );

assign next_pc = (PCSel == `PCSel_jr) ? ra :
                (PCSel == `PCSel_branch && branch) ? (D_pc + 4 + {{14{offset[15]}}, offset, 2'b00}) :
                (PCSel == `PCSel_j) ? ({D_pc[31:28], imm, 2'b00}) :
                (PCSel == `PCSel_PCa4) ? (F_pc + 4) : (F_pc + 4);


endmodule
