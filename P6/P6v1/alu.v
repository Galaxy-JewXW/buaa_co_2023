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
    input [3:0] ALUOp,
    output reg [31:0] result
    );

always @(*) begin
    case (ALUOp)
        `ALU_add:
            result = A + B;
        `ALU_sub:
            result = A - B;
        `ALU_or:
            result = A | B;
        `ALU_lui:
            result = B << 16;
        `ALU_and:
            result = A & B;
        `ALU_slt:
            result = $signed(A) < $signed(B);
        `ALU_sltu:
            result = A < B; 
        default: 
            result = 32'b0;
    endcase
end

endmodule
