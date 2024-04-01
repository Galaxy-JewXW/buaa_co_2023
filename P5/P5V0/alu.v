`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:28 11/07/2023 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] result
    );

assign result = (ALUOp == `ALU_add) ? A + B :
                (ALUOp == `ALU_sub) ? A - B :
                (ALUOp == `ALU_or) ? A | B :
                (ALUOp == `ALU_lui) ? B << 16 : 32'h0000_0000;

endmodule
