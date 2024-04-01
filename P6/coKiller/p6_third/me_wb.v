`timescale 1ns / 1ps

module me_wb(
    input reset,
    input clk,
    input [31:0] PC_M,
    input [31:0] PC_M4,
    input [31:0] PC_M8,
    input [31:0] Instr_M,
    input [31:0] rtData_M,
    input [31:0] aluOut_M,
    input [31:0] dmOut_M,
	input Bcd_cmp_M,

    output reg [31:0] PC_W,
    output reg [31:0] PC_W4,
    output reg [31:0] PC_W8,
    output reg [31:0] Instr_W,
    output reg [31:0] rtData_W,
    output reg [31:0] aluOut_W,
    output reg [31:0] dmOut_W,

    output [1:0] MemtoReg,
    output RegWrite,
    output [1:0] RegDst,
	output reg Bcd_cmp_W
);
    always @(posedge clk) begin
        if (reset) begin
            PC_W <= 32'h0000_3000;
            PC_W4 <= PC_W + 4;
            PC_W8 <= PC_W + 8;
            Instr_W <= 0;
            rtData_W <= 0;
            aluOut_W <= 0;
            dmOut_W <= 0;
				Bcd_cmp_W <= 0; 
        end
        else begin
            PC_W <= PC_M;
            PC_W4 <= PC_M4;
            PC_W8 <= PC_M8;
            Instr_W <= Instr_M;
            rtData_W <= rtData_M;
            aluOut_W <= aluOut_M;
            dmOut_W <= dmOut_M;
			Bcd_cmp_W <= Bcd_cmp_M; 
        end
    end
    
    //RegWrite  RegDst
    wire Ori, Lw, Sw, Beq, Lui, Jal, Nop, Add, Sub, Jr, Bcd, And, Or, Slt, Sltu, Addi, Andi;
    ctrl ctrlf_d (.Instr(Instr_W), .Ori(Ori), .Lw(Lw), .Sw(Sw), .Beq(Beq), .Lui(Lui), .Jal(Jal), .Nop(Nop), 
	 .Add(Add), .Sub(Sub), .Jr(Jr), .Bcd(Bcd), .And(And), .Or(Or), .Slt(Slt), .Sltu(Sltu), .Addi(Addi), .Andi(Andi), .Mfhi(Mfhi), .Mflo(Mflo),
	 .Sb(Sb), .Sh(Sh), .Lb(Lb), .Lh(Lh));

    assign MemtoReg = (Lw || Sw || Sb || Sh || Lb || Lh) ? 2'b01 :  //dmOut_W
                      (Jal || (Bcd_cmp_W && Bcd)) ? 2'b10 :       //PC_W8
                      2'b00;                //aluOut_W;
    assign RegWrite = (Add || Sub || And || Or || Slt || Sltu || Ori || Addi || Andi || Lui || 
						    Lw || Lb || Lh || Jal || Mfhi || Mflo || (Bcd_cmp_W && Bcd));
    assign RegDst = (Add || Sub || And || Or || Slt || Sltu  || Mfhi || Mflo) ? 2'b00 :   //Rinstr   RegAddr = Rd
                    (Jal || (Bcd_cmp_W && Bcd)) ? 2'b10 :  //link RegAddr = 5'b11111
                    2'b01;   //RegAddr = Rt

endmodule