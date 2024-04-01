`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:21:49 11/08/2023
// Design Name:   ifu
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/CO_hw/P5v0/tb_ifu.v
// Project Name:  P5v0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ifu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ifu;

	// Inputs
	reg clk;
	reg reset;
	reg enable;
	reg [31:0] next_pc;

	// Outputs
	wire [31:0] instr;
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	ifu uut (
		.clk(clk), 
		.reset(reset), 
		.enable(enable), 
		.next_pc(next_pc), 
		.instr(instr), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		enable = 0;
		next_pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

