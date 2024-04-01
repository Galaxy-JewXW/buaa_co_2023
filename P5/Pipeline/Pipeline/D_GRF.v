`timescale 1ns / 1ps
`include "def.v"

module D_GRF(
    input [31:0] PC,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input clk,
    input reset,
    output [31:0] RD1,
    output [31:0] RD2
    );
    reg[31:0] register[31:0];
    integer i;

    initial begin
        for(i=0; i<32; i=i+1) register[i] <= 0;
    end

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<32; i=i+1) register[i] <= 0;
        end else begin
            register[A3] <= (A3 != 0) ? WD : 0;
            if(A3 != 0) $display("%d@%h: $%d <= %h", $time, PC, A3, WD);
        end
    end
    assign RD1 = (A1 == 0) ? 0 : (A3 == A1 && A1 != 0) ? WD : register[A1];
    assign RD2 = (A2 == 0) ? 0 : (A3 == A2 && A2 != 0) ? WD : register[A2];

endmodule
