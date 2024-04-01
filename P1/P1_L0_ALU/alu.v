`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:29:02 10/10/2023 
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
    output [31:0] C
    );
    reg [31:0] res;

always @(*) begin
    case (ALUOp)
        3'd0: res <= A + B;
        3'd1: res <= A - B;
        3'd2: res <= A & B;
        3'd3: res <= A | B;
        3'd4: res <= A >> B;
        3'd5: res <= $signed(A) >>> B;
        default: res <= 32'b0;
            
    endcase
end

assign C = res;

endmodule
