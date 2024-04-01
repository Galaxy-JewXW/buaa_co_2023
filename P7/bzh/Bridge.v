`timescale 1ns / 1ps

`define DM_start        32'h0000_0000
`define DM_end          32'h0000_2fff
`define timer0_start    32'h0000_7f00
`define timer0_end      32'h0000_7f0b
`define timer1_start    32'h0000_7f10
`define timer1_end      32'h0000_7f1b

module Bridge(
  input [31:0] CPU_addr,
  input [3 :0] CPU_byteen,

  input [31:0] DM_dataRead,
  input [31:0] timer0_dataRead,
  input [31:0] timer1_dataRead,

  output [31:0] Bridge_dataRead,

  output [3:0] DM_byteen,
  output timer0_WE,
  output timer1_WE
    );

wire if_DM = CPU_addr>=`DM_start & CPU_addr<=`DM_end;
wire if_timer0 = CPU_addr>=`timer0_start & CPU_addr<=`timer0_end;
wire if_timer1 = CPU_addr>=`timer1_start & CPU_addr<=`timer1_end;

assign DM_byteen = if_DM ? CPU_byteen : 4'b0;
assign timer0_WE = (|CPU_byteen) & if_timer0;
assign timer1_WE = (|CPU_byteen) & if_timer1;

assign Bridge_dataRead = if_DM ? DM_dataRead :
                        if_timer0 ? timer0_dataRead :
                        if_timer1 ? timer1_dataRead :
                        32'b0;

endmodule
