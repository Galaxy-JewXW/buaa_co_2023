`timescale 1ns / 1ps

module id_ex(
    input reset,
    input clk,
    input [31:0] PC_D,
    input [31:0] PC_D4,
    input [31:0] PC_D8,
    input [31:0] Instr_D,
    input [31:0] rsData_D,
    input [31:0] rtData_D,
    input [31:0] immExt_D,
	input Bcd_cmp_D,

    output reg [31:0] PC_E,
    output reg [31:0] PC_E4,
    output reg [31:0] PC_E8,
    output reg [31:0] Instr_E,
    output reg [31:0] rsData_E,
    output reg [31:0] rtData_E,
    output reg [31:0] immExt_E,

    output [3:0] ALUOp,
    output ALUSrc,
    output [3:0] MDUOp,
	output reg Bcd_cmp_E
);
    always @(posedge clk) begin
        if (reset) begin
            PC_E <= 32'h0000_3000;
            PC_E4 <= 32'h00003000;
            PC_E8 <= 32'h00003000;
            Instr_E <= 0;
            rsData_E <= 0;
            rtData_E <= 0;
            immExt_E <= 0;
			Bcd_cmp_E <= 0;
        end
        else begin
            PC_E <= PC_D;
            PC_E4 <= PC_D4;
            PC_E8 <= PC_D8;
            Instr_E <= Instr_D;
            rsData_E <= rsData_D;
            rtData_E <= rtData_D;
            immExt_E <= immExt_D;
			Bcd_cmp_E <= Bcd_cmp_D;
        end
    end

    //ALUOp  ALUSrc 
    wire Ori, Lw, Sw, Beq, Lui, Jal, Nop, Add, Sub, Jr, And, Or, Slt, Sltu, Addi, Andi;
    ctrl ctrlf_d (.Instr(Instr_E), .Ori(Ori), .Lw(Lw), .Sw(Sw), .Beq(Beq), .Lui(Lui), .Jal(Jal), .Nop(Nop), .Add(Add), .Sub(Sub), .Jr(Jr), 
	 .And(And), .Or(Or), .Slt(Slt), .Sltu(Sltu), .Addi(Addi), .Andi(Andi), .Mult(Mult), .Multu(Multu), .Div(Div), .Divu(Divu), .Mfhi(Mfhi), .Mflo(Mflo), .Mthi(Mthi), .Mtlo(Mtlo), 
	 .Sb(Sb), .Sh(Sh), .Lb(Lb), .Lh(Lh));

    assign ALUOp = (Sw || Lw || Sb || Sh || Lb || Lh || Add || Addi) ? 4'b0001 :
                   Sub ? 4'b0010 :
                    (Ori || Or) ? 4'b0011 :
                    Lui ? 4'b0100 :
                    (And || Andi) ? 4'b0101 :
                    Slt ? 4'b0110 :
                    Sltu ? 4'b0111 :
                    4'b0000;
    assign ALUSrc = (Lw || Sw || Sb || Sh || Lb || Lh || Ori || Lui || Addi || Andi);

    assign MDUOp = (Mult) ? 1 :
                   (Multu) ? 2 :
                   (Div) ? 3 :
                   (Divu) ? 4 :
                   (Mfhi) ? 5 :
                   (Mflo) ? 6 :
                   (Mthi) ? 7 :
                   (Mtlo) ? 8 : 0; 	 

endmodule