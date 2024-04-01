`timescale 1ns / 1ps

module ALU(
    input [31:0] inA,
    input [31:0] inB,
    input [3:0] op,
    input [4:0] shift,
    output [31:0] result,
    output aluZero,
    output overflow
    );

assign result=(op==4'b0000) ? inA + inB :
              (op==4'b0001) ? inA - inB :
              (op==4'b0010) ? inA & inB :
              (op==4'b0011) ? inA | inB :
              (op==4'b0100) ? inA ^ inB :
              (op==4'b0101) ? ~(inA | inB) :
              (op==4'b0110) ? inB << shift :
              (op==4'b0111) ? inB >> shift :
              (op==4'b1000) ? $signed($signed(inB) >>> $signed(shift)) :
              (op==4'b1001) ? inB << 16 :
              (op==4'b1010) ? {31'b0, $signed(inA) < $signed(inB)} : 
              (op==4'b1011) ? {31'b0,inA < inB} : 
              32'b0;

assign aluZero = (result == 0) ? 1 : 0;

wire [32:0] inA_over = {inA[31],inA};
wire [32:0] inB_over = {inB[31],inB};

wire [32:0] add_over = inA_over + inB_over;
wire [32:0] sub_over = inA_over - inB_over;

wire add_overflow = (op==4'b0000) & (add_over[32]!=add_over[31]);
wire sub_overflow = (op==4'b0001) & (sub_over[32]!=sub_over[31]);
assign overflow = add_overflow | sub_overflow;

endmodule