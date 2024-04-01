`timescale 1ns / 1ps

module if_id(
    input reset,
    input clk,
    input WE,
    input [31:0] PC_F,
    input [31:0] Instr_F,
	input Bcd_cmp_D,

    output reg [31:0] PC_D,
    output reg [31:0] PC_D4,
    output reg [31:0] PC_D8,
    output reg [31:0] Instr_D,

    output [2:0] pcSrc,
    output [1:0] ExtOp
);    
    //pcSrc
    wire Ori, Lw, Sw, Beq, Lui, Jal, Nop, Add, Sub, Jr, Bne, Addi;
    ctrl ctrlf_d (.Instr(Instr_D), .Ori(Ori), .Lw(Lw), .Sw(Sw), .Beq(Beq), .Lui(Lui), .Jal(Jal), .Nop(Nop), 
	 .Add(Add), .Sub(Sub), .Jr(Jr), .Bcd(Bcd), .Bne(Bne), .Sb(Sb), .Sh(Sh), .Lb(Lb), .Lh(Lh), .Addi(Addi));

    assign pcSrc = (Beq) ? 3'b001 :
                   (Jal) ? 3'b010 :
                   (Jr) ? 3'b011 :
						(Bcd) ? 3'b100 :
						(Bne) ? 3'b101 :
                   3'b000;
    assign ExtOp = (Beq || Sw || Lw || Bcd || Bne || Sb || Sh || Lb || Lh || Addi) ? 2'b01 : 2'b00;
	 
	always @(posedge clk) begin
			  if (reset) begin
					PC_D <= 32'h0000_3000;
					PC_D4 <= 32'h00003000;
					PC_D8 <= 32'h00003000;
					Instr_D <= 0;
			  end 
			  else if (WE) begin
					if(Bcd && ~Bcd_cmp_D) begin
						Instr_D <= 0;
					end
					else begin
						PC_D <= PC_F;
						PC_D4 <= PC_F + 4;
						PC_D8 <= PC_F + 8;
						Instr_D <= Instr_F;
					end
			  end
		 end

endmodule



