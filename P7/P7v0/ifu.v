`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:39 11/07/2023 
// Design Name: 
// Module Name:    pc 
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
module ifu(
    input clk,
    input reset,
    input enable,
    input Req,
    input [31:0] next_pc,
    output reg [31:0] pc
    );

reg [31:0] ROM [0:4095];
integer i;

// initial begin
//     $readmemh("code.txt", ROM);
//     pc <= 32'h0000_3000;
//     // for (i = 0; i < 4096; i = i + 1) begin
//     //     $display("%h", ROM[i]);
//     // end
// end

always @(posedge clk) begin
    if (reset) begin
        pc <= 32'h0000_3000;
    end
    else if (enable | Req) begin
        pc <= next_pc;
    end
    else begin
        pc <= pc;
    end
end

// assign instr = ROM[(pc - 32'h0000_3000) >> 2];

endmodule
