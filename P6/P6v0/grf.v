`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:39:07 11/07/2023 
// Design Name: 
// Module Name:    grf 
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
module grf(
    input clk,
    input reset,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] WPC,
    output [31:0] RD1,
    output [31:0] RD2
    );

reg [31:0] registers [0:31];
integer i;

initial begin
    for (i = 0; i < 32; i = i + 1) begin
        registers[i] <= 32'h0000_0000;
    end
end

// forwarding when "Read after Write" occurs.
assign RD1 = (A1 == 5'b00000) ? 32'h0000_0000 :
            (A1 == A3) ? WD : registers[A1];
assign RD2 = (A2 == 5'b00000) ? 32'h0000_0000 :
            (A2 == A3) ? WD : registers[A2];

always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 32; i = i + 1) begin
            registers[i] <= 32'h0000_0000;
        end
    end
    else if (A3 != 5'b00000) begin
        registers[A3] <= WD;
        // $display("%d@%h: $%d <= %h", $time, WPC, A3, WD);
    end
end
endmodule
