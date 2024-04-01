`timescale 1ns / 1ps

`define R 6'h00
`define ori 6'h0d
`define lw 6'h23
`define sw 6'h2b
`define beq 6'h04
`define lui 6'h0f
`define jal 6'h03
`define addi 6'b001000
`define andi 6'b001100
`define bne 6'b000101
`define sb 6'b101000
`define sh 6'b101001
`define lb 6'b100000
`define lh 6'b100001

`define bcd 6'b110000

`define nop_f 6'h00
`define add_f 6'h20
`define sub_f 6'h22
`define jr_f 6'h08
`define and_f 6'b100100
`define or_f 6'b100101
`define slt_f 6'b101010
`define sltu_f 6'b101011
`define mult_f 6'b011000
`define multu_f 6'b011001
`define div_f 6'b011010
`define divu_f 6'b011011
`define mfhi_f 6'b010000
`define mflo_f 6'b010010
`define mthi_f 6'b010001
`define mtlo_f 6'b010011

module ctrl(
    input [31:0] Instr,
    output Ori,
    output Lw,
    output Sw,
    output Beq,
    output Lui,
    output Jal,
    output Nop,
    output Add,
    output Sub,
    output Jr,
    output And,
    output Or,
    output Slt,
    output Sltu,
    output Addi,
    output Andi,
    output Bne,
    output Mult,
    output Multu,
    output Div,
    output Divu,
    output Mfhi,
    output Mflo,
    output Mthi,
    output Mtlo,
    output Sb,
    output Sh,
    output Lb,
    output Lh,

	output Bcd,

    output cal_R,
    output cal_I,   
    output Load,
    output Store,
    output Branch,
    output Jump,
    output J_link,
    output Hilo,

    output [4:0] Rs,
    output [4:0] Rt,
    output [4:0] Rd
);
    wire [5:0] Op, Func;
    assign Op = Instr[31:26];
    assign Func = Instr[5:0];

    assign Ori = (Op == `ori);
    assign Lw = (Op == `lw);
    assign Sw = (Op == `sw);
    assign Beq = (Op == `beq);
    assign Lui = (Op == `lui);
    assign Jal = (Op == `jal);
    assign Addi = (Op == `addi);
    assign Andi = (Op == `andi);
    assign Bne = (Op == `bne);
	assign Bcd = (Op == `bcd);
    assign Sb = (Op == `sb);
    assign Sh = (Op == `sh);
    assign Lb = (Op == `lb);
    assign Lh = (Op == `lh);
    assign Nop = (Op == `R) & (Func == `nop_f);
    assign Add = (Op == `R) & (Func == `add_f);
    assign Sub = (Op == `R) & (Func == `sub_f);
    assign Jr = (Op == `R) & (Func == `jr_f);
    assign And = (Op == `R) & (Func == `and_f);
    assign Or = (Op == `R) & (Func == `or_f);
    assign Slt = (Op == `R) & (Func == `slt_f);
    assign Sltu = (Op == `R) & (Func == `sltu_f);
    assign Mult = (Op == `R) & (Func == `mult_f);
    assign Multu = (Op == `R) & (Func == `multu_f);
    assign Div = (Op == `R) & (Func == `div_f);
    assign Divu = (Op == `R) & (Func == `divu_f);
    assign Mfhi = (Op == `R) & (Func == `mfhi_f);
    assign Mflo = (Op == `R) & (Func == `mflo_f);
    assign Mthi = (Op == `R) & (Func == `mthi_f);
    assign Mtlo = (Op == `R) & (Func == `mtlo_f);

    assign cal_R = (Add || Sub || And || Or || Slt || Sltu);
    assign cal_I = (Ori || Lui || Addi || Andi);
    assign Load = (Lw || Lb || Lh);
    assign Store = (Sw || Sb || Sh);
    assign Branch = (Beq || Bne);
    assign Jump = (Jr);
    assign J_link = (Jal);
    assign Hilo = (Mult || Multu || Div || Divu || Mfhi || Mflo || Mthi || Mtlo);

    assign Rs = Instr[25:21];
    assign Rt = Instr[20:16];
    assign Rd = Instr[15:11];
    
endmodule