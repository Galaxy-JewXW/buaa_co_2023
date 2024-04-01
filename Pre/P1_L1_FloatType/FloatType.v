`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:01 10/04/2023 
// Design Name: 
// Module Name:    FloatType 
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
module FloatType(
    input [31:0] num,
    output [4:0] float_type
    );
    wire [7:0] a;
    wire [22:0] b;
    reg [4:0] out;
    assign a = num[30:23];
    assign b = num[22:0];
    always @(*) begin
        if(a == 8'b0 && b == 23'b0)
            out = 5'b00001;
        else if(a != 8'b0 && a!= 8'b11111111)
            out = 5'b00010;
        else if(a == 8'b0 && b != 23'b0)
            out = 5'b00100;
        else if(a == 8'b11111111 && b == 23'b0)
            out = 5'b01000;
        else if(a == 8'b11111111 && b != 23'b0)
            out = 5'b10000;
    end
    assign float_type = out;


endmodule
