`timescale 1ns / 1ps

`define aluop_add 4'b0001
`define aluop_sub 4'b0010
`define aluop_or 4'b0011
`define aluop_lui 4'b0100
`define aluop_and 4'b0101
`define aluop_slt 4'b0110
`define aluop_sltu 4'b0111



module alu(
    input [31:0] R1,
    input [31:0] R2,
    input [3:0] ALUOp,

    output [31:0] Rout
);
    wire [31:0] Add, Sub, Or, Lui, And, Slt, Sltu;

    assign Add = (R1 + R2);
    assign Sub = (R1 - R2);
    assign Or = (R1 | R2);
    assign Lui = {{R2[15:0]}, {16{1'b0}}};	
	assign And = (R1 & R2);
	assign Slt = ($signed(R1) < $signed(R2)) ? 32'h0000_0001 : 32'h0000_0000;
	assign Sltu = (R1 < R2) ? 32'h0000_0001 : 32'h0000_0000;
	 
	 /*hmo
	 reg [5:0] rs_sum1, rt_sum1, rs_sum0, rt_sum0;
	 integer i;
	 
	 always @(*) begin
		rs_sum1 = 0;
		rt_sum1 = 0;
		rs_sum0 = 0;
		rt_sum0 = 0;
		for (i = 0; i < 32; i = i + 1) begin
			rs_sum1 = rs_sum1 + R1[i];
			rt_sum1 = rt_sum1 + R2[i];
			rs_sum0 = rs_sum0 + ~R1[i];
			rt_sum0 = rt_sum0 + ~R2[i];
		end
	 end
	 assign Hmo = (rs_sum1 > rt_sum1) ? R1 : R2;
	 hmo_end*/

    assign Rout = (ALUOp == `aluop_add) ? Add :
                  (ALUOp == `aluop_sub) ? Sub :
                  (ALUOp == `aluop_or) ? Or :
                  (ALUOp == `aluop_lui) ? Lui : 
				  (ALUOp == `aluop_and) ? And : 
				  (ALUOp == `aluop_slt) ? Slt : 
				  (ALUOp == `aluop_sltu) ? Sltu : 
				  32'h0000_0000;
endmodule









	/*
	 //hmo
	 reg [5:0] rs_sum1, rt_sum1;
	 integer i;
	 always @(*) begin
		rs_sum1 = 0;
		rt_sum1 = 0;		
		for(i = 0; i < 32; i = i + 1) begin
			rs_sum1 = rs_sum1 + R1[i];
			rt_sum1 = rt_sum1 + R2[i];	
		end
	 end
	 //assign Hmo = (rs_sum1 > rt_sum1) ? R1 : R2;
	 assign Hmo = R1 << rs_sum1;
	 // hmo_end	 
	 
	 //bcd
	 reg [5:0] rs_sum0,rt_sum0;
	 always @(*) begin
		rs_sum0 = 0;
		rt_sum0 = 0;
		for(i = 0; i < 32; i = i + 1) begin
			rs_sum0 = rs_sum0 + ~R1[i];
			rt_sum0 = rt_sum0 + ~R2[i];		
		end
	 end
	 wire [6:0] rs0, rt0, add_rsrt0;
	 assign rs0 = {{rs_sum0[5]}, rs_sum0};
	 assign rt0 = {{rt_sum0[5]}, rt_sum0};
	 assign add_rsrt0 = rs0 + rt0;
	 assign alu_bcd = (add_rsrt0[6] == add_rsrt0[5]);
	 //bcd_end
	 */

