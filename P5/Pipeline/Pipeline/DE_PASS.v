`timescale 1ns / 1ps
`include "def.v"

module DE_PASS(
    input clk,
    input reset,
    input Empty,
    input En,

    input [31:0] D_PC,
    input [31:0] D_Instr,
    input [31:0] D_imm32,
    input [31:0] D_rs,
    input [31:0] D_rt,
	 
    input D_b_jump,
    output reg [31:0] E_PC,
    output reg [31:0] E_Instr,
    output reg [31:0] E_imm32,
    output reg [31:0] E_rs,
    output reg [31:0] E_rt,
    output reg E_b_jump
    );

    always @(posedge clk) begin
        if(Empty || reset) begin
            E_PC <= 0;
            E_Instr <= 0;
            E_rs <= 0;
            E_rt <= 0;
            E_imm32 <= 0;
            E_b_jump <= 0;
        end else if(En) begin
            E_PC <= D_PC;
            E_Instr <= D_Instr;
            E_rs <= D_rs;
            E_rt <= D_rt;
            E_imm32 <= D_imm32;
            E_b_jump <= D_b_jump;
        end
    end

endmodule
