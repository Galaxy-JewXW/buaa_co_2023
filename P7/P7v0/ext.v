`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:14 11/07/2023 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] num,
    input EXTOp,
    output [31:0] result
    );

wire [31:0] zeroe;
wire [31:0] signede;

assign zeroe = {{16{1'b0}}, num};
assign signede = {{16{num[15]}}, num};

assign result = (EXTOp == `EXT_zero) ? zeroe :
                (EXTOp == `EXT_signed) ? signede : 32'h0000_0000;

endmodule
