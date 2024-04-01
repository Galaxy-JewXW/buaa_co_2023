`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:09:13 11/10/2023
// Design Name:   counting
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/CO_hw/Pre/time2/tb.v
// Project Name:  time2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [1:0] num;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	counting uut (
		.num(num), 
		.clk(clk), 
		.ans(ans)
	);

	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		num = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		num = 1;
		#10;
		num = 1;
		#10;
		num = 2;
		#10;
		num = 3;
		#10;
		num = 3;
		#10;
		num = 1;
		#10;
		num = 2;
		#10;
		num = 1;
		#10;
		num = 1;
		#10;
		num = 1;
		#10;
		num = 2;
		#10;
		num = 2;
		#10;
		num = 3;
		#10;
		num = 3;
		#10;
		num = 3;
		#10;
		num = 1;
		#10;
	end
      
endmodule

