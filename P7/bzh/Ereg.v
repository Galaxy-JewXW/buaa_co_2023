`timescale 1ns / 1ps

module Ereg(
  input clk,
  input reset,
  input flush,
  input Req,

  input [31:0] PC,
  input [31:0] inStr,
  input [31:0] regOut1,
  input [31:0] regOut2,
  input [31:0] extend,
  input [4:0] shamt,
  input [4:0] EXCcode,
  input if_delaybanch,

  output reg [31:0] PC_out,
  output reg [31:0] inStr_out,
  output reg [31:0] regOut1_out,
  output reg [31:0] regOut2_out,
  output reg [31:0] extend_out,
  output reg [4:0] shamt_out,
  output reg [4:0] EXCcode_out,
  output reg if_delaybanch_out
    );

always @(posedge clk) begin
  if(reset==1 || flush==1 || Req==1) begin
    PC_out<= Req ? 32'h0000_4180 : (flush ? PC : 0);
    inStr_out<=0;
    regOut1_out<=0;
    regOut2_out<=0;
    extend_out<=0;
    shamt_out<=0;
    EXCcode_out<= flush ? EXCcode : 0;
    if_delaybanch_out<= flush ? if_delaybanch : 0;
  end

  else begin
    PC_out<=PC;
    inStr_out<=inStr;
    regOut1_out<=regOut1;
    regOut2_out<=regOut2;
    extend_out<=extend;
    shamt_out<=shamt;
    EXCcode_out<=EXCcode;
    if_delaybanch_out<=if_delaybanch;
  end
end

endmodule
