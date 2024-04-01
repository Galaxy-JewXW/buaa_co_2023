`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:34:05 10/10/2023
// Design Name:   BlockChecker
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/Computer-Organization/P1/P1_L1_BlockChecker/tb.v
// Project Name:  P1_L1_BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
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
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#10;
		reset = 0;
		in = "a";
#10;

in = " ";
#10;

in = "B";
#10;

in = "E";
#10;

in = "G";
#10;

in = "i";
#10;

in = "N";
#10;

in = " ";
#10;

in = "E";
#10;

in = "n";
#10;

in = "D";
#10;

in = "C";
#10;

in = " ";
#10;

in = "e";
#10;

in = "n";
#10;

in = "d";
#10;

in = " ";
#10;

in = "e";
#10;

in = "n";
#10;

in = "d";
#10;

in = " ";
#10;

in = "B";
#10;

in = "e";
#10;

in = "G";
#10;

in = "I";
#10;

in = "n";
#10;

	end

	always #5 clk = ~clk;
      
endmodule

