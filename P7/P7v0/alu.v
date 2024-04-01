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
    input ALUAriOv,
    input ALUDMOv,
    output reg [31:0] result,
    output EXC_AriOv,
    output EXC_DMOv
    );

wire [32:0] ext_A;
wire [32:0] ext_B;
assign ext_A = {A[31], A};
assign ext_B = {B[31], B};

wire [32:0] ext_add;
wire add_ov;
assign ext_add = ext_A + ext_B;
assign add_ov = (ALUOp == `ALU_add && ext_add[31] != ext_add[32]);

wire [32:0] ext_sub;
wire sub_ov;
assign ext_sub = ext_A - ext_B;
assign sub_ov = (ALUOp == `ALU_sub && ext_sub[31] != ext_sub[32]);

assign EXC_AriOv = ALUAriOv && (add_ov || sub_ov);
assign EXC_DMOv = ALUDMOv && (add_ov || sub_ov);

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
        `ALU_srl:
            result = A >> B;
        default: 
            result = 32'b0;
    endcase
end

endmodule
