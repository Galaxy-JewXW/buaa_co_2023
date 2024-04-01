`timescale 1ns / 1ps

module Dreg(
  input clk,
  input reset,
  input flush,
  input clear,
  input Req,

  input [31:0] inStr,
  input [31:0] PC,
  input [4:0] EXCcode,
  input if_delaybanch,

  output reg [31:0] inStr_out,
  output reg [31:0] PC_out,
  output reg [4:0] EXCcode_out,
  output reg if_delaybanch_out
    );

always @(posedge clk) begin
  if(reset==1 || Req==1) begin
    PC_out<= Req ? 32'h0000_4180 : 32'b0;
    inStr_out<=0;
    EXCcode_out<=0;
    if_delaybanch_out<=0;
  end

  else if(flush==1) begin
    PC_out<=PC_out;
    inStr_out<=inStr_out;
    EXCcode_out<=EXCcode_out;
    if_delaybanch_out<=if_delaybanch_out;
  end

  else if(clear==1) begin
    PC_out<=0;
    inStr_out<=0;
    EXCcode_out<=0;
    if_delaybanch_out<=0;
  end

  else begin
    PC_out<=PC;
    inStr_out<=inStr;
    EXCcode_out<=EXCcode;
    if_delaybanch_out<=if_delaybanch;
  end
end

endmodule
