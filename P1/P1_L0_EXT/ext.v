`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:54:13 10/10/2023 
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
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
    
always @(*) begin
    case (EOp)
        2'b00: ext = {{16{imm[15]}}, imm};
        2'b01: ext = {{16{1'b0}}, imm};
        2'b10: ext = {imm, {16{1'b0}}};
        2'b11: ext = {{14{imm[15]}}, imm, {2{1'b0}}};
    endcase
end

endmodule
