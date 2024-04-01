`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:19:54 10/10/2023 
// Design Name: 
// Module Name:    BlockChecker 
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
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );

    reg [4:0] state;
    reg [31:0] cnt_begin;
    reg [31:0] cnt_end;

function [7:0] lower;
    input [7:0] ch;
    begin
        if (ch >= "A" && ch <= "Z")
            lower = ch - "A" + "a";
        else
            lower = ch;
    end
endfunction

always @(posedge clk or posedge reset) begin
    if (reset) begin
        state <= 0;
        cnt_begin <= 0;
        cnt_end <= 0;
    end
    else begin
        case (state)
            0: begin
                if (lower(in) == "b")
                    state <= 1;
                else if (lower(in) == "e")
                    state <= 6;
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            1: begin
                if (lower(in) == "e")
                    state <= 2;
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            2: begin
                if (lower(in) == "g")
                    state <= 3;
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            3: begin
                if (lower(in) == "i")
                    state <= 4;
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            4: begin
                if (lower(in) == "n") begin
                    cnt_begin <= cnt_begin + 1;
                    state <= 5;
                end
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            5: begin
                if (in == " ")
                    state <= 0;
                else begin
                    cnt_begin <= cnt_begin - 1;
                    state <= 9;
                end
            end
            6: begin
                if (lower(in) == "n")
                    state <= 7;
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            7: begin
                if (lower(in) == "d") begin
                    cnt_end <= cnt_end + 1;
                    state <= 8;
                end
                else if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            8: begin
                if (in == " ") begin
                    if (cnt_begin < cnt_end)
                        state <= 10;
                    else
                        state <= 0;
                end
                else begin
                    cnt_end <= cnt_end - 1;
                    state <= 9;
                end
            end
            9: begin
                if (in == " ")
                    state <= 0;
                else
                    state <= 9;
            end
            10: begin
                state <= 10;
            end
        endcase
    end
end

    reg res;
    
always @(*) begin
    if (cnt_begin == cnt_end)
        res = 1;
    else
        res = 0;
end

assign result = res;

endmodule
