`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:28 11/10/2023 
// Design Name: 
// Module Name:    counting 
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
module counting(
    input [1:0] num,
    input clk,
    output ans
    );

reg [1:0] status;
initial begin
    status <= 2'd0;
end
assign ans = (status == 2'd3);
always @(posedge clk) begin
    if (status == 2'd0) begin
        if (num == 2'd1)
            status <= 2'd1;
        else if (num == 2'd2)
            status <= 2'd0;
        else if (num == 2'd3)
            status <= 2'd0;
    end
    else if (status == 2'd1) begin
        if (num == 2'd1)
            status <= 2'd1;
        else if (num == 2'd2)
            status <= 2'd2;
        else if (num == 2'd3)
            status <= 2'd0;
    end
    else if (status == 2'd2) begin
        if (num == 2'd1)
            status <= 2'd1;
        else if (num == 2'd2)
            status <= 2'd2;
        else if (num == 2'd3)
            status <= 2'd3;
    end
    else if (status == 2'd3) begin
        if (num == 2'd1)
            status <= 2'd1;
        else if (num == 2'd2)
            status <= 2'd0;
        else if (num == 2'd3)
            status <= 2'd3;
    end
end

endmodule
