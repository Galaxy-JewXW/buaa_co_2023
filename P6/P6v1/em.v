`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:01:35 11/08/2023 
// Design Name: 
// Module Name:    em
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
module em(
    input clk,
    input reset,
    input flush,
    input enable,
    input [31:0] E_pc,
    input [31:0] E_instr,
    input [31:0] E_aluans,
    input [31:0] E_gpr_rt,
    input [31:0] E_mduans,
    output reg [31:0] M_pc,
    output reg [31:0] M_instr,
    output reg [31:0] M_aluans,
    output reg [31:0] M_gpr_rt,
    output reg [31:0] M_mduans
    );

always @(posedge clk) begin
    if (reset || flush) begin
        M_pc <= 0;
        M_instr <= 0;
        M_aluans <= 0;
        M_gpr_rt <= 0;
        M_mduans <= 0;
    end
    else if (enable) begin
        M_pc <= E_pc;
        M_instr <= E_instr;
        M_aluans <= E_aluans;
        M_gpr_rt <= E_gpr_rt;
        M_mduans <= E_mduans;
    end
    else begin
        M_pc <= M_pc;
        M_instr <= M_instr;
        M_aluans <= M_aluans;
        M_gpr_rt <= M_gpr_rt;
        M_mduans <= M_mduans;
    end
end


endmodule
