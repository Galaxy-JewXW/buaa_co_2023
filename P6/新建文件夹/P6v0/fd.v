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
    input [31:0] F_pc,
    input [31:0] F_instr,
    output reg [31:0] D_pc,
    output reg [31:0] D_instr
    );

always @(posedge clk) begin
    if (reset || flush) begin
        D_instr <= 0;
        D_pc <= 0;
    end
    else if (enable) begin
        D_instr <= F_instr;
        D_pc <= F_pc;
    end
    else begin
        D_instr <= D_instr;
        D_pc <= D_pc;
    end
end


endmodule
