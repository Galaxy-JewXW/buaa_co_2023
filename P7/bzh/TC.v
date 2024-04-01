`timescale 1ns / 1ps

`define state_init 2'b00
`define state_load 2'b01
`define state_count  2'b10
`define state_INT  2'b11

`define ctrl   mem[0]
`define preset mem[1]
`define count  mem[2]

module TC(
    input clk,
    input reset,
    input [31:2] address,
    input WE,
    input [31:0] dataIn,
    output [31:0] dataOut,
    output IRQ
    );

reg [31:0] mem [2:0];
reg [1:0] state;
reg if_int;

assign IRQ = `ctrl[3] & if_int;
assign dataOut = mem[address[3:2]];

wire [31:0] state_load = address[3:2]==0 ? {28'h0, dataIn[3:0]} : dataIn;

integer i;
always @(posedge clk) begin
  if(reset) begin
    state<=2'b00;
    if_int<=0;
    for(i=0;i<3;i=i+1) mem[i]<=0;
  end 

  else if(WE) begin
    // $display("%d@: *%h<=%h", $time, {address, 2'b00}, state_load);
    mem[address[3:2]]<=state_load;
  end

  else begin
    case(state)
      `state_init : begin
        if(`ctrl[0]) begin
          state<=`state_load;
          if_int<=1'b0;
        end
      end
      
      `state_load : begin
        `count<=`preset;
        state<=`state_count;
      end

      `state_count  : begin
        if(`ctrl[0]) begin
          if(`count > 1) 
            `count<=`count-1;
          else begin
            `count<=0;
            state<=`state_INT;
            if_int<=1;
          end
        end
        else state<=`state_init;
      end

      default : begin
        if(`ctrl[2:1] == 2'b00)
          `ctrl[0]<=0;
        else
          if_int<=0;
        
        state<=`state_init;
      end
    endcase
  end
end

endmodule
