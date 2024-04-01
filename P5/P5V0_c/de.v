`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:21:54 11/07/2023 
// Design Name: 
// Module Name:    de
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
module de(
    input clk,
    input reset,
    input flush,
    input enable,
    input [31:0] D_pc,
    input [31:0] D_instr,
    input [31:0] D_extres,
    input [31:0] D_gpr_rs,
    input [31:0] D_gpr_rt,
    output reg [31:0] E_pc,
    output reg [31:0] E_instr,
    output reg [31:0] E_extres,
    output reg [31:0] E_gpr_rs,
    output reg [31:0] E_gpr_rt
    );

always @(posedge clk) begin
    if (reset || flush) begin
        E_pc <= 0;
        E_instr <= 0;
        E_extres <= 0;
        E_gpr_rs <= 0;
        E_gpr_rt <= 0;
    end
    else if (enable) begin
        E_pc <= D_pc;
        E_instr <= D_instr;
        E_extres <= D_extres;
        E_gpr_rs <= D_gpr_rs;
        E_gpr_rt <= D_gpr_rt;
    end
    else begin
        E_pc <= E_pc;
        E_instr <= E_instr;
        E_extres <= E_extres;
        E_gpr_rs <= E_gpr_rs;
        E_gpr_rt <= E_gpr_rt;
    end
end


endmodule
