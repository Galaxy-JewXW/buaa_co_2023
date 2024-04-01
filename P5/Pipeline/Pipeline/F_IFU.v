`timescale 1ns / 1ps
`include "def.v"

module F_IFU(
    input clk,
    input reset,
    input PCEn,
    input [31:0] NPC,
    output [31:0] Instr,
    output reg [31:0] PC
    );

    reg[31:0] mem[0:4095];

    initial begin
        $readmemh("code.txt", mem);
        PC = 32'h0000_3000;
    end

    always @(posedge clk) begin
        if(reset) begin
            PC <= 32'h0000_3000;
        end else if(PCEn) begin
            PC <= NPC;
        end
    end

    assign Instr = mem[(PC[31:0] - 32'h0000_3000) >> 2];

endmodule
