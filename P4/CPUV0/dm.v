`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:43:22 10/31/2023 
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
    input [31:0] A,
    input [31:0] WD,
    input WE,
    input [1:0] DMOp,
    input [31:0] WPC,
    output [31:0] RD
    );

reg [31:0] RAM [0:3071];
integer i;
initial begin
    for (i = 0; i < 2072; i = i + 1) begin
        RAM[i] = 32'h0000_0000;
    end
end

wire [11:0] address;
assign address = A[13:2];

// read data
assign RD = RAM[address];

// write data
always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 2072; i = i + 1) begin
            RAM[i] = 32'h0000_0000;
        end
    end
    else begin
        if (WE) begin
            RAM[address] <= WD;
            $display("@%h: *%h <= %h", WPC, A, WD);
        end
        else begin
            RAM[address] <= RAM[address];
        end
    end
end


// write data with DMOp
// wire [31:0] halfword;
// wire [31:0] halfword0;
// wire [31:0] halfword1;
// wire [31:0] byte;
// wire [31:0] byte0;
// wire [31:0] byte1;
// wire [31:0] byte2;
// wire [31:0] byte3;
// reg [31:0] datain;

// assign halfword0 = {RD[31:16], WD[15:0]};
// assign halfword1 = {WD[31:16], RD[15:0]};

// assign byte0 = {RD[31:24], RD[23:16], RD[15:8], WD[7:0]};
// assign byte1 = {RD[31:24], RD[23:16], WD[15:8], RD[7:0]};
// assign byte2 = {RD[31:24], WD[23:16], RD[15:8], RD[7:0]};
// assign byte3 = {WD[31:24], RD[23:16], RD[15:8], RD[7:0]};


// always @(*) begin
//     if (DMOp == `DM_word) begin
//         datain = WD;
//     end
//     else if (DMOp == `DM_halfword) begin
//         if (A[1] == 1'b0) begin
//             datain = halfword0;
//         end
//         else if (A[1] == 1'b1) begin
//             datain = halfword1;
//         end
//         else begin
//             datain = 32'b0;
//         end
//     end
//     else if (DMOp == `DM_byte) begin
//         if (A[1:0] == 2'b00) begin
//             datain = byte0;
//         end
//         else if (A[1:0] == 2'b01) begin
//             datain = byte1;
//         end
//         else if (A[1:0] == 2'b10) begin
//             datain = byte2;
//         end
//         else if (A[1:0] == 2'b11) begin
//             datain = byte3;
//         end
//         else begin
//             datain = 32'b0;
//         end
//     end
//     else begin
//         datain = 32'b0;
//     end
// end

// always @(posedge clk) begin
//     if (reset) begin
//         for (i = 0; i < 2072; i = i + 1) begin
//             RAM[i] = 32'h0000_0000;
//         end
//     end
//     else begin
//         if (WE) begin
//             RAM[address] <= datain;
//             $display("@%h: *%h <= %h", WPC, A, datain);
//         end
//         else begin
//             RAM[address] <= RAM[address];
//         end
//     end
// end




endmodule
