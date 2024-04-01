`timescale 1ns / 1ps

module GRF(
    input clk,
    input reset,
    input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2
    );

reg [31:0] grf [0:31];

assign RD1 = (A3!=0 & A1==A3 & WE) ? WD : grf[A1];
assign RD2 = (A3!=0 & A2==A3 & WE) ? WD : grf[A2];

integer i=0;

always @(posedge clk) begin
  if(reset==1) begin
    for(i=0;i<32;i=i+1) begin
      grf[i]<=32'b0000_0000;
    end
  end

  else begin
    if(WE && A3!=0) begin
      grf[A3] <= WD;
    end

    else begin
      grf[A3] <= grf[A3];
    end
  end
end

endmodule
