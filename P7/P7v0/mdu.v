`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:51:09 11/14/2023 
// Design Name: 
// Module Name:    mdu 
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
module mdu(
    input clk,
    input reset,
    input Req,
    input [2:0] MDUOp,
    input [31:0] gpr_rs,
    input [31:0] gpr_rt,
    input start,
    output reg busy,
    output reg [31:0] HI,
    output reg [31:0] LO
    );

reg [3:0] cnt;
reg [31:0] hi;
reg [31:0] lo;

initial begin
    HI = 0;
    LO = 0;
    hi = 0;
    lo = 0;
    cnt = 0;
end

always @(posedge clk) begin
    if (!Req) begin
        if (MDUOp == `MDU_mthi)
            HI <= gpr_rs;
        else if (MDUOp == `MDU_mtlo)
            LO <= gpr_rs;
    end
end

always @(posedge clk) begin
    if (reset) begin
        cnt <= 3'b0;
        busy <= 1'b0;
        HI <= 32'b0;
        LO <= 32'b0;
    end
    else if (!Req) begin
        if (cnt == 0) begin
            if (start) begin
                busy <= 1'b1;
                if (MDUOp == `MDU_mult || MDUOp == `MDU_multu)
                    cnt <= 5;
                else if (MDUOp == `MDU_div || MDUOp == `MDU_divu)
                    cnt <= 10;

                if (MDUOp == `MDU_mult)
                    {hi, lo} <= $signed(gpr_rs) * $signed(gpr_rt);
                else if (MDUOp == `MDU_multu)
                    {hi, lo} <= gpr_rs * gpr_rt;
                else if (MDUOp == `MDU_div) begin
                    hi <= $signed(gpr_rs) % $signed(gpr_rt);
                    lo <= $signed(gpr_rs) / $signed(gpr_rt);
                end
                else if (MDUOp == `MDU_divu) begin
                    hi <= gpr_rs % gpr_rt;
                    lo <= gpr_rs / gpr_rt;
                end
            end
            else
                cnt <= 3'd0;
        end
        else if (cnt == 1) begin
            cnt <= cnt - 1;
            LO <= lo;
            HI <= hi;
            busy <= 1'b0;
        end
        else
            cnt <= cnt - 1;
    end
end


endmodule
