`timescale 1ns / 1ps

`define mult_op 1
`define multu_op 2
`define div_op 3
`define divu_op 4
`define mfhi_op 5
`define mflo_op 6
`define mthi_op 7
`define mtlo_op 8

module mdu(
    input reset,
    input clk,
    input [31:0] R1,
    input [31:0] R2,
    input [3:0] MDUOp,
    output Busy,
    output reg [31:0] Hi,
    output reg [31:0] Lo
);
    reg [3:0] delay;
	 reg [63:0] temp;

    always @(posedge clk) begin
        if (reset) begin
            Hi <= 0;
            Lo <= 0;
            delay <= 0;
        end
        else if (delay) begin
            delay <= delay - 1;
        end
        else begin
            if (MDUOp == `mult_op) begin
                temp <= $signed(R1) * $signed(R2);
					 Hi <= temp[63:32];
					 Lo <= temp[31:0];
                delay <= 5;
            end
            else if (MDUOp == `multu_op) begin
                temp <= R1 * R2;
					 Hi <= temp[63:32];
					 Lo <= temp[31:0];
                delay <= 5;
            end
            else if (MDUOp == `div_op) begin
                Hi <= $signed(R1) % $signed(R2);
                Lo <= $signed(R1) / $signed(R2);
                delay <= 10;
            end
            else if (MDUOp == `divu_op) begin
                Hi <= R1 % R2;
                Lo <= R1 / R2;
                delay <= 10;
            end
             else if (MDUOp == `mthi_op) begin
                Hi <= R1;
            end
             else if (MDUOp == `mtlo_op) begin
                Lo <= R1;
            end
        end
    end

    assign Busy = (delay != 0);

endmodule