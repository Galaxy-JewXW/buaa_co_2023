`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:33:45 11/08/2023 
// Design Name: 
// Module Name:    mw 
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
module mw(
    input clk,
    input reset,
    input flush,
    input enable,
    input Req,
    input [31:0] M_pc,
    input [31:0] M_instr,
    input [31:0] M_aluans,
    input [31:0] M_dmrd,
    input [31:0] M_mduans,
    input [31:0] M_cp0out,
    output reg [31:0] W_pc,
    output reg [31:0] W_instr,
    output reg [31:0] W_aluans,
    output reg [31:0] W_dmrd,
    output reg [31:0] W_mduans,
    output reg [31:0] W_cp0out
    );

always @(posedge clk) begin
    if (reset || flush || Req) begin
        W_pc <= (Req) ? 32'h0000_4180 : 0;
        W_instr <= 0;
        W_aluans <= 0;
        W_dmrd <= 0;
        W_mduans <= 0;
        W_cp0out <= 0;
    end
    else if (enable) begin
        W_pc <= M_pc;
        W_instr <= M_instr;
        W_aluans <= M_aluans;
        W_dmrd <= M_dmrd;
        W_mduans <= M_mduans;
        W_cp0out <= M_cp0out;
    end
    else begin
        W_pc <= W_pc;
        W_instr <= W_instr;
        W_aluans <= W_aluans;
        W_dmrd <= W_dmrd;
        W_mduans <= W_mduans;
        W_cp0out <= W_cp0out;
    end
end


endmodule