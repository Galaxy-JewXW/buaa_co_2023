`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:48 10/31/2023 
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
    output zero,
    output [31:0] result
    );

// if A == B, set the signal zero to 1'b1
assign zero = (A == B);

// output signal result according to ALUOp
assign result = (ALUOp == `ALU_add) ? A + B :
                (ALUOp == `ALU_sub) ? A - B :
                (ALUOp == `ALU_or) ? A | B :
                (ALUOp == `ALU_lui) ? B << 16 : 32'h0000_0000;


endmodule
