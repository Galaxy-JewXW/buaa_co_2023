`timescale 1ns / 1ps
`define im SR[15:10]
`define exl SR[1]
`define ie SR[0]
`define bd Cause[31]
`define ip Cause[15:10]
`define exc_code Cause[6:2]
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:22 11/21/2023 
// Design Name: 
// Module Name:    cp0 
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
module cp0(
    input clk,
    input reset,
    input enable,
    input [4:0] CP0Add,
    input [31:0] CP0In,
    input [31:0] VPC,
    input BDIn,
    input [4:0] ExcCodeIn,
    input [5:0] HWInt,
    input EXLClr,
    output [31:0] CP0Out,
    output [31:0] EPCOut,
    output Req,
    output IntResponse
    );

reg [31:0] SR;
reg [31:0] Cause;
reg [31:0] EPC;

initial begin
    SR <= 0;
    Cause <= 0;
    EPC <= 0;
end

wire exc_req;
wire int_req;
assign exc_req = !`exl && (|ExcCodeIn); // inside
assign int_req = !`exl && `ie && (|(HWInt & `im)); // outside
assign Req = exc_req | int_req;

assign EPCOut = (Req) ? (BDIn ? (VPC - 32'd4) : VPC) : EPC;

assign CP0Out = (CP0Add == 12) ? SR :
                (CP0Add == 13) ? Cause :
                (CP0Add == 14) ? EPC : 32'd0;

assign IntResponse = !`exl && `ie && (HWInt[2] & SR[12]); // form InterruptGenerator

always @(posedge clk or posedge reset) begin
    if (reset) begin
        SR <= 0;
        Cause <= 0;
        EPC <= 0;
    end
    else begin
        `ip <= HWInt; 
        if (EXLClr)
            `exl <= 1'b0;
        if (Req) begin
            `exc_code <= int_req ? 0 : ExcCodeIn;
            `exl <= 1'b1;
            EPC <= EPCOut;
            `bd <= BDIn;
        end
        else if (enable) begin
            if (CP0Add == 12)
                SR <= CP0In;
            else if (CP0Add == 14)
                EPC <= CP0In;
        end
    end
end

endmodule
