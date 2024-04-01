`timescale 1ns / 1ps
`include "def.v"

module MW_PASS(
    input clk,
    input reset,

    input [31:0] M_PC,
    input [31:0] M_Instr,
    input [31:0] M_ALURes,
    input [31:0] M_DMRD,
    input M_b_jump,
    output reg [31:0] W_PC,
    output reg [31:0] W_Instr,
    output reg [31:0] W_ALURes,
    output reg [31:0] W_DMRD,
    output reg W_b_jump
    );

    always @(posedge clk) begin
        if(reset) begin
            W_PC <= 0;
            W_Instr <= 0;
            W_ALURes <= 0;
            W_DMRD <= 0;
            W_b_jump <= 0;
        end else begin
            W_PC <= M_PC;
            W_Instr <= M_Instr;
            W_ALURes <= M_ALURes;
            W_DMRD <= M_DMRD;
            W_b_jump <= M_b_jump;
        end
    end


endmodule
