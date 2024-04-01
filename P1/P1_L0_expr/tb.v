`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:03:49 10/10/2023
// Design Name:   expr
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/Computer-Organization/P1/P1_L0_expr/tb.v
// Project Name:  P1_L0_expr
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: expr
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
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	expr uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		clr = 1;
		#10;
		clr = 0;

		in = "1";
		#10;

		in = "+";
		#10;

		in = "2";
		#10;

		in = "*";
		#10;

		in = "3";
		#10;

		in = "1";
		#10;
		in = "1";
		#10;

		clr = 1;
		#20;

		clr = 0;
		in = "9";
		#10;
		in = "*";
		#10;
		in = "8";

	end

	always #5 clk = ~clk;
      
endmodule

