`timescale 1ns / 1ps

`define DM_start        32'h0000_0000
`define DM_end          32'h0000_2fff
`define timer0_start    32'h0000_7f00
`define timer0_end      32'h0000_7f0b
`define timer1_start    32'h0000_7f10
`define timer1_end      32'h0000_7f1b
`define INT_start       32'h0000_7f20
`define INT_end         32'h0000_7f23

module DU(
    input [31:0] memData,
    input [31:0] address,
    input [31:0] memIn, //to write

    input store,
    input load,

    input WE,
    input if_byte,
    input if_half,
    input load_extend,

    output [31:0] memDataRead,
    output [31:0] memTowrite,
    output [3:0] byteen,

    output adel,
    output ades
    );

wire [4:0] shift = {address[1:0],3'b000};

wire [31:0] rdTmp = memData >> shift;
assign memTowrite = memIn << shift;

//lw,lh,lb,lhu,lbu
assign memDataRead = if_byte ? (load_extend) ? {{24{rdTmp[7]}},rdTmp[7:0]} : {24'b0,rdTmp[7:0]} :
                    if_half ? (load_extend) ? {{16{rdTmp[15]}},rdTmp[15:0]} : {16'b0,rdTmp[15:0]} : 
                    memData;

//sw,sh,sb
assign byteen = WE==0 ? 4'b0000 :
                if_byte ? 4'b0001 << address[1:0] :
                if_half ? 4'b0011 << address[1:0] :
                4'b1111;

//error
wire addr_error = ((!if_byte&!if_half) & (|address[1:0])) |
                  (if_half & address[0]);

wire over_error = !((address>=`DM_start & address<=`DM_end) |
                  (address>=`timer0_start & address<=`timer0_end) |
                  (address>=`timer1_start & address<=`timer1_end) |
                  (address>=`INT_start & address<=`INT_end));

//timer-reg
wire timer_error = (if_half | if_byte) & address>=`timer0_start;

//counter-reg
wire timer_reg = (address>=32'h0000_7f08 & address<=32'h0000_7f0b) |
                (address>=32'h0000_7f18 & address<=32'h0000_7f1b);

assign adel = load & (addr_error | over_error | timer_error);
assign ades = store & (addr_error | over_error | timer_error | timer_reg);

endmodule
