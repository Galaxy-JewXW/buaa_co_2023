`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:11:43 11/08/2023 
// Design Name: 
// Module Name:    dm 
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
module dm(
    input clk,
    input reset,
    input WE,
    input [31:0] A,
    input [31:0] WD,
    input [1:0] DMOp,
    input [31:0] WPC,
    output [31:0] RD
    );

reg [31:0] RAM [0:3071];
integer i;

initial begin
    for (i = 0; i < 3072; i = i + 1) begin
        RAM[i] <= 32'h0000_0000;
    end    
end

wire [11:0] addr;
assign addr = A[13:2];

wire [15:0] halfword;
wire [7:0] byte;
assign halfword = RAM[addr][(15 + 16 * A[1]) -: 16];
assign byte = RAM[addr][(7 + 8 * A[1:0]) -: 8];

assign RD = (DMOp == `DM_word) ? (RAM[addr]) :
            (DMOp == `DM_halfword) ? ({{16{halfword[15]}}, halfword}) :
            (DMOp == `DM_byte) ? ({{24{byte[7]}}, byte}) : (RAM[addr]);

always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 3072; i = i + 1) begin
            RAM[i] <= 32'h0000_0000;
        end    
    end
    else if (WE) begin
        case (DMOp)
            `DM_word: begin
                RAM[addr] <= WD;
                $display("%d@%h: *%h <= %h", $time, WPC, A, WD);
            end
            `DM_halfword: begin
                RAM[addr][(15 + 16 * A[1]) -: 16] <= WD[15:0];
                case (A[1])
                    1'b0:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {RAM[addr][31:16], WD[15:0]});
                    1'b1:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {WD[15:0], RAM[addr][15:0]});
                endcase
            end
            `DM_byte: begin
                RAM[addr][(7 + 8 * A[1:0]) -: 8] <= WD[7:0];
                case (A[1:0])
                    2'b00:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {RAM[addr][31:8], WD[7:0]});
                    2'b01:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {RAM[addr][31:16], WD[7:0], RAM[addr][7:0]});
                    2'b10:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {RAM[addr][31:24], WD[7:0], RAM[addr][15:0]});
                    2'b11:
                        $display("%d@%h: *%h <= %h", $time, WPC, A, {WD[7:0], RAM[addr][23:0]});
                endcase
            end
            default: begin
                RAM[addr] <= WD;
                $display("%d@%h: *%h <= %h", $time, WPC, A, WD);
            end
        endcase
    end
    else begin
        RAM[addr] <= RAM[addr];
    end
end


endmodule
