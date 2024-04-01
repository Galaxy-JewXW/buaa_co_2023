`timescale 1ns / 1ps

module grf(
    input clk,
    input reset,
    input RegWrite,
    input [4:0] Rs,
    input [4:0] Rt,
    input [4:0] RegAddr,
    input [31:0] RegData,
    
    output [31:0] o1,
    output [31:0] o2
);
    integer i = 0;
    reg [31:0] GPR [0:31];    

    initial begin
      for (i = 0; i < 32; i = i + 1) 
        GPR[i] <= 0;
    end

    //neibu zhuanfa
    assign o1 = (Rs == RegAddr && RegAddr != 5'b00000 && RegWrite) ? RegData : GPR[Rs];
    assign o2 = (Rt == RegAddr && RegAddr != 5'b00000 && RegWrite) ? RegData : GPR[Rt];

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) 
                GPR[i] <= 32'h0000_0000;
        end
        else begin
            if (RegWrite) begin
                if (RegAddr != 5'b00000) begin
                GPR[RegAddr] <= RegData;
                end
                else 
                GPR[5'b00000] <= 32'h0000_0000;
            end
            else 
                GPR[RegAddr] <= GPR[RegAddr];
        end
    end
endmodule

