`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:25:53 10/31/2023 
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
    input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] WPC,
    output [31:0] RD1,
    output [31:0] RD2
    );

reg [31:0] REG [0:31];
integer i;

initial begin
    for (i = 0; i < 32; i = i + 1) begin
        REG[i] = 32'h0000_0000;
    end
end

// output A1 and A2 according to the value of RD1 and RD2
// No need to wait for posedge clk
assign RD1 = REG[A1];
assign RD2 = REG[A2];

// write data when posedge clk
// caution: $0 should not be written in
// in another word, $0 always keeps value 0.
always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 32; i = i + 1) begin
            REG[i] = 32'h0000_0000;
        end
    end
    else begin
        if (WE && A3 != 5'b00000) begin
            REG[A3] <= WD;
            $display("@%h: $%d <= %h", WPC, A3, WD); // important!
        end
        else begin
            REG[A3] <= REG[A3];
        end
    end
end

endmodule
