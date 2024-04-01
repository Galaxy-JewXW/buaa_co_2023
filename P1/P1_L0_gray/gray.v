`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:08:32 10/10/2023 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
    reg [2:0] status;
    reg over;

    assign Output = status;
    assign Overflow = over;

    always @(posedge Clk) begin
        if (Reset) begin
            status <= 3'b000;
            over <= 1'b0;
        end
        else if (En) begin
            case (status)
                3'b000: status <= 3'b001;
                3'b001: status <= 3'b011;
                3'b011: status <= 3'b010;
                3'b010: status <= 3'b110;
                3'b110: status <= 3'b111;
                3'b111: status <= 3'b101;
                3'b101: status <= 3'b100;
                3'b100: begin
                    over <= 1'b1;
                    status <= 3'b000;
                end
            endcase
        end
        else begin
            status <= status;
        end
    end


endmodule
