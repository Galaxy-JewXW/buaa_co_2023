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
    for (i = 0; i < 3072; i = i + 1) begin
        RAM[i] = 32'h0000_0000;
    end
end

wire [11:0] address;
assign address = A[13:2];

// // read data
// assign RD = RAM[address];

// // write data
// always @(posedge clk) begin
//     if (reset) begin
//         for (i = 0; i < 2072; i = i + 1) begin
//             RAM[i] = 32'h0000_0000;
//         end
//     end
//     else begin
//         if (WE) begin
//             RAM[address] <= WD;
//             $display("@%h: *%h <= %h", WPC, A, WD);
//         end
//         else begin
//             RAM[address] <= RAM[address];
//         end
//     end
// end

wire [31:0] temp_A;
assign temp_A = {A[31:2], 2'b0};

// write data with DMOp
wire [31:0] tempRD;
assign tempRD = RAM[address];

wire [31:0] halfword0;
wire [31:0] halfword1;
wire [31:0] byte0;
wire [31:0] byte1;
wire [31:0] byte2;
wire [31:0] byte3;
wire [31:0] datain;

assign halfword0 = {tempRD[31:16], WD[15:0]};
assign halfword1 = {WD[15:0], tempRD[15:0]};

assign byte0 = {tempRD[31:24], tempRD[23:16], tempRD[15:8], WD[7:0]};
assign byte1 = {tempRD[31:24], tempRD[23:16], WD[7:0], tempRD[7:0]};
assign byte2 = {tempRD[31:24], WD[7:0], tempRD[15:8], tempRD[7:0]};
assign byte3 = {WD[7:0], tempRD[23:16], tempRD[15:8], tempRD[7:0]};


assign datain = (DMOp == `DM_word) ? WD : 
                (DMOp == `DM_halfword && A[1] == 1'b0) ? halfword0 : 
                (DMOp == `DM_halfword && A[1] == 1'b1) ? halfword1 : 
                (DMOp == `DM_byte && A[1] == 2'b00) ? byte0 : 
                (DMOp == `DM_byte && A[1] == 2'b01) ? byte1 : 
                (DMOp == `DM_byte && A[1] == 2'b10) ? byte2 : 
                (DMOp == `DM_byte && A[1] == 2'b11) ? byte3 : 32'b0; 

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
//             datain = WD;
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
//             datain = WD;
//         end
//     end
//     else begin
//         datain = WD;
//     end
// end



always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 3072; i = i + 1) begin
            RAM[i] <= 32'h0000_0000;
        end
    end
    else begin
        if (WE) begin
            RAM[address] <= datain;
            $display("@%h: *%h <= %h", WPC, temp_A, datain);
        end
        else begin
            RAM[address] <= RAM[address];
        end
    end
end


// read data with DMOp
assign RD = (DMOp == `DM_word) ? tempRD : 
            (DMOp == `DM_halfword && A[1] == 1'b0) ? {{16{tempRD[15]}}, tempRD[15:0]} : 
            (DMOp == `DM_halfword && A[1] == 1'b1) ? {{16{tempRD[31]}}, tempRD[31:16]} : 
            (DMOp == `DM_byte && A[1] == 2'b00) ? {{24{tempRD[7]}}, tempRD[7:0]} : 
            (DMOp == `DM_byte && A[1] == 2'b01) ? {{24{tempRD[15]}}, tempRD[15:8]} : 
            (DMOp == `DM_byte && A[1] == 2'b10) ? {{24{tempRD[23]}}, tempRD[23:16]} : 
            (DMOp == `DM_byte && A[1] == 2'b11) ? {{24{tempRD[31]}}, tempRD[31:24]} : tempRD; 

endmodule
