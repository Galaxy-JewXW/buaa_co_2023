`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:00 10/10/2023 
// Design Name: 
// Module Name:    expr 
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
module expr(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
    reg [2:0] status;


always @(posedge clk or posedge clr) begin
    if (clr) begin
        status <= 2'b00;
    end
    else begin
        case (status)
            2'b00: begin
                if (in >= "0" && in <= "9")
                    status <= 2'b01;
                else
                    status <= 2'b11;
            end
            2'b01: begin
                if (in == "+" || in == "*")
                    status <= 2'b10;
                else
                    status <= 2'b11;
            end
            2'b10: begin
                if (in >= "0" && in <= "9")
                    status <= 2'b01;
                else
                    status <= 2'b11;
            end
            2'b11: begin
                status <= status;
            end
            default: 
                status <= 2'b00;
        endcase
    end
end

assign out = (status == 2'b01);

endmodule
