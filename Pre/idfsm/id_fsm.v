`timescale 1ns / 1ps
`define Illegal 2'b00
`define Alpha 2'b01
`define Digit 2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:45:08 08/30/2023 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );

wire [1:0] type;
reg [1:0] status = `Illegal;
assign type = (char >= 8'd48 && char <= 8'd57) ? `Digit :
                ((char >= 8'd65 && char <= 8'd90) || (char >= 8'd97 && char <= 8'd122)) ? `Alpha 
                : `Illegal;
assign out = (status == `Digit) ? 1'b1 : 1'b0;

always @(posedge clk) begin
    case (status)
        `Illegal:
        if(type == `Alpha)
            status <= `Alpha;
        else
            status <= `Illegal;
        `Alpha:
        if(type == `Illegal)
            status <= `Illegal;
        else if(type == `Alpha)
            status <= `Alpha;
        else
            status <= `Digit;
        `Digit:
        if(type == `Illegal)
            status <= `Illegal;
        else if(type == `Alpha)
            status <= `Alpha;
        else
            status <= `Digit;
    endcase
end

endmodule
