`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:14:15 10/31/2023
// Design Name:   ifu
// Module Name:   D:/BUAA_Undergraduate/23-24autumn/CO_hw/P4/CCCPU/tb_ifu.v
// Project Name:  CCCPU
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
	reg [1:0] PCSel;
	reg [15:0] offset;
	reg [25:0] imm;
	reg [31:0] jr_reg;

	// Outputs
	wire [31:0] PC;
	wire [31:0] PCa4;
	wire [31:0] Instr;

	// Instantiate the Unit Under Test (UUT)
	ifu uut (
		.clk(clk), 
		.reset(reset), 
		.PCSel(PCSel), 
		.offset(offset), 
		.imm(imm), 
		.jr_reg(jr_reg), 
		.PC(PC), 
		.PCa4(PCa4), 
		.Instr(Instr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		PCSel = 0;
		offset = 0;
		imm = 0;
		jr_reg = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#10;
		reset = 0;
		PCSel = 0;
		offset = 0;
		imm = 0;
		jr_reg = 0;
	end

	always #5 clk = ~clk;
      
endmodule

