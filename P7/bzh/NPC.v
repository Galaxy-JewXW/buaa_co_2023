`timescale 1ns / 1ps

module NPC(
  input [31:0] D_PC,
  input [31:0] F_PC,
  input [31:0] EPC,

  input [25:0] imm,
  input [15:0] offest,

  input Req,
  input if_eret,
  input if_branch,
  input if_jump,
  input [31:0] rs,
  input jumpSrc,

  output [31:0] PCnext
    );

wire [31:0] PCadd4 = F_PC + 32'h0000_0004;
wire [31:0] PC_branch = D_PC + 32'h0000_0004 + {{14{offest[15]}},offest,2'b00};
wire [31:0] PC_jump = jumpSrc ? rs : {D_PC[31:28],imm,2'b00};

assign PCnext = Req ? 32'h0000_4180 :
                if_eret ? EPC + 4 :
                if_jump ? PC_jump :
                if_branch ? PC_branch : 
                PCadd4;

endmodule