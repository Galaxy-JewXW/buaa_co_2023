`timescale 1ns / 1ps

module ex_me(
    input reset,
    input clk,
    input [31:0] PC_E,
    input [31:0] PC_E4,
    input [31:0] PC_E8,
    input [31:0] Instr_E,
    input [31:0] rtData_E,
    input [31:0] aluOut_E,
	input Bcd_cmp_E,

    output reg [31:0] PC_M,
    output reg [31:0] PC_M4,
    output reg [31:0] PC_M8,
    output reg [31:0] Instr_M,
    output reg [31:0] rtData_M,
    output reg [31:0] aluOut_M,

    output [3:0] ByteEn,
    output [1:0] Load_extOp,
	output reg Bcd_cmp_M
);
    always @(posedge clk) begin
        if (reset) begin
            PC_M <= 32'h0000_3000;
            PC_M4 <= PC_M + 4;
            PC_M8 <= PC_M + 8;
            Instr_M <= 0;
            rtData_M <= 0;
            aluOut_M <= 0;
			Bcd_cmp_M <= 0;
        end
        else begin
            PC_M <= PC_E;
            PC_M4 <= PC_E4;
            PC_M8 <= PC_E8;
            Instr_M <= Instr_E;
            rtData_M <= rtData_E;
            aluOut_M <= aluOut_E;
			Bcd_cmp_M <= Bcd_cmp_E;
        end
    end

    //Memwrite  MemtoReg
    wire Ori, Lw, Sw, Beq, Lui, Jal, Nop, Add, Sub, Jr, Sb, Sh, Lb, Lh;
    ctrl ctrlf_d (.Instr(Instr_M), .Ori(Ori), .Lw(Lw), .Sw(Sw), .Beq(Beq), .Lui(Lui), .Jal(Jal), .Nop(Nop), 
    .Add(Add), .Sub(Sub), .Jr(Jr), .Sb(Sb), .Sh(Sh), .Lb(Lb), .Lh(Lh));

    wire [1:0] byte;
    assign byte = aluOut_M[1:0];

    assign ByteEn = (Sw) ? 4'b1111 :
                    (Sh & (byte[1] == 1'b0)) ? 4'b0011 :
                    (Sh & (byte[1] == 1'b1)) ? 4'b1100 :
                    (Sb & (byte == 2'b00)) ? 4'b0001 :
                    (Sb & (byte == 2'b01)) ? 4'b0010 :
                    (Sb & (byte == 2'b10)) ? 4'b0100 :
                    (Sb & (byte == 2'b11)) ? 4'b1000 :
                    4'b0000;
    assign Load_extOp = (Lh) ? 2'b01 :
                        (Lb) ? 2'b10 :
                        2'b00; 

endmodule