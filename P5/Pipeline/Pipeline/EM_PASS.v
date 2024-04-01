`timescale 1ns / 1ps
`include "def.v"

module EM_PASS(
    input clk,
    input reset,

    input [31:0] E_PC,
    input [31:0] E_Instr,
    input [31:0] E_ALURes,
    input [31:0] E_rt,
    input [31:0] E_imm32,
    input E_b_jump,
    output reg [31:0] M_PC,
    output reg [31:0] M_Instr,
    output reg [31:0] M_ALURes,
    output reg [31:0] M_rt,
    output reg [31:0] M_imm32,
    output reg M_b_jump
    );

    always @(posedge clk) begin
        if(reset) begin
            M_PC <= 0;
            M_Instr <= 0;
            M_ALURes <= 0;
            M_rt <= 0;
            M_imm32 <= 0;
            M_b_jump <= 0;
        end else begin
            M_PC <= E_PC;
            M_Instr <= E_Instr;
            M_ALURes <= E_ALURes;
            M_rt <= E_rt;
            M_imm32 <= E_imm32;
            M_b_jump <= E_b_jump;
        end
    end

endmodule
