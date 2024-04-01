`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:15:35 11/08/2023 
// Design Name: 
// Module Name:    fd 
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
module fd(
    input clk,
    input reset,
    input flush,
    input enable,
    input Req,
    input [31:0] F_pc,
    input [31:0] F_instr,
    input [4:0] F_EXCCode,
    input F_delayed,
    output reg [31:0] D_pc,
    output reg [31:0] D_instr,
    output reg [4:0] D_EXCCode,
    output reg D_delayed
    );

initial begin
    D_instr <= 0;
    D_pc <= 0;
    D_EXCCode <= 0;
    D_delayed <= 0;
end

always @(posedge clk) begin
    if (reset || flush) begin
        D_instr <= 0;
        D_pc <= 0;
        D_EXCCode <= 0;
        D_delayed <= 0;
    end
    else if (Req) begin
        D_instr <= 0;
        D_pc <= 32'h0000_4180;
        D_EXCCode <= 0;
        D_delayed <= 0;
    end
    else if (enable) begin
        D_instr <= F_instr;
        D_pc <= F_pc;
        D_EXCCode <= F_EXCCode;
        D_delayed <= F_delayed;
    end
    else begin
        D_instr <= D_instr;
        D_pc <= D_pc;
        D_EXCCode <= D_EXCCode;
        D_delayed <= D_delayed;
    end
end


endmodule
