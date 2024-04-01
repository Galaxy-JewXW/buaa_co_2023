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
    input Req,
    input [31:0] E_pc,
    input [31:0] E_instr,
    input [31:0] E_aluans,
    input [31:0] E_gpr_rt,
    input [31:0] E_mduans,
    input E_delayed,
    input [4:0] E_EXCCode,
    input E_EXC_DMOv,
    output reg [31:0] M_pc,
    output reg [31:0] M_instr,
    output reg [31:0] M_aluans,
    output reg [31:0] M_gpr_rt,
    output reg [31:0] M_mduans,
    output reg M_delayed,
    output reg [4:0] M_EXCCode,
    output reg M_EXC_DMOv
    );

initial begin
    M_pc <= 0;
    M_instr <= 0;
    M_aluans <= 0;
    M_gpr_rt <= 0;
    M_mduans <= 0;
    M_delayed <= 0;
    M_EXCCode <= 0;
    M_EXC_DMOv <= 0;
end

always @(posedge clk) begin
    if (reset || flush || Req) begin
        M_pc <= (Req ? 32'h0000_4180 : 0);
        M_instr <= 0;
        M_aluans <= 0;
        M_gpr_rt <= 0;
        M_mduans <= 0;
        M_delayed <= 0;
        M_EXCCode <= 0;
        M_EXC_DMOv <= 0;
    end
    else if (enable) begin
        M_pc <= E_pc;
        M_instr <= E_instr;
        M_aluans <= E_aluans;
        M_gpr_rt <= E_gpr_rt;
        M_mduans <= E_mduans;
        M_delayed <= E_delayed;
        M_EXCCode <= E_EXCCode;
        M_EXC_DMOv <= E_EXC_DMOv;
    end
    else begin
        M_pc <= M_pc;
        M_instr <= M_instr;
        M_aluans <= M_aluans;
        M_gpr_rt <= M_gpr_rt;
        M_mduans <= M_mduans;
        M_delayed <= M_delayed;
        M_EXCCode <= M_EXCCode;
        M_EXC_DMOv <= M_EXC_DMOv;
    end
end


endmodule
