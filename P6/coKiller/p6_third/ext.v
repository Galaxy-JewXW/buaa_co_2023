`timescale 1ns / 1ps

module ext(
	input [15:0] imm,
	input [1:0] EOp,
	output [31:0] ext
    );
	 
	assign ext = (EOp == 2'b01) ? { {16{imm[15]}} , imm} :     //EOP = 1 : 符号拓展
					{ {16{1'b0}} , imm}   ;     //EOp = 0 : 零拓展


endmodule