`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:36 11/07/2023 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
    input [31:0] gpr_rs,
    input [31:0] gpr_rt,
    input [2:0] CMPOp,
    output flag
    );

    wire equal;
    assign equal = (gpr_rs == gpr_rt);

    assign flag = (equal && CMPOp == `CMP_beq) || (!equal && CMPOp == `CMP_bne);

endmodule
