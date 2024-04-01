`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:20:53 10/10/2023
// Design Name:   gray
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/Computer-Organization/P1/P1_L0_gray/tb.v
// Project Name:  P1_L0_gray
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
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
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire [2:0] Output;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Reset = 1;
		#10;
		Reset = 0;
		En = 1;
		#20;
		Reset = 1;
		#10;
		Reset = 0;
		#100;
		Reset = 1;
		#10;
		Reset = 0;
		#30;
		En = 0;
	end

	always #5 Clk = ~Clk;
      
endmodule

