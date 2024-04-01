`timescale 1ns / 1ps
`include "def.v"

module FD_PASS(
    input clk,
    input reset,
    input En,
	 
    input [31:0] F_PC,
    input [31:0] F_Instr,
    output reg [31:0] D_PC,
    output reg [31:0] D_Instr
    );

    always @(posedge clk) begin
        if (reset) begin
            D_Instr <= 0;
            D_PC <= 0;
        end else if(En) begin
            D_Instr <= F_Instr;
            D_PC <= F_PC;
        end
    end

endmodule

