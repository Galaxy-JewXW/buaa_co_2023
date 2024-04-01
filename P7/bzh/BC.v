`timescale 1ns / 1ps

module BC(
    input [5:0] op,
    input [4:0] rt,
    input [31:0] rd1,
    input [31:0] rd2,
    output if_branch
    );

wire _beq = op==6'b000100;
wire _bne = op==6'b000101;
wire _bgez = op==6'b000001 & rt==5'b00001;
wire _bgtz = op==6'b000111;
wire _blez = op==6'b000110;
wire _bltz = op==6'b000001 & rt==5'b00000;

assign if_branch = (_beq & rd1==rd2) |
                  (_bne & rd1!=rd2) |
                  (_bgez & ($signed(rd1)>=$signed(0))) |
                  (_bgtz & ($signed(rd1)>$signed(0))) |
                  (_blez & ($signed(rd1)<=$signed(0))) |
                  (_bltz & ($signed(rd1)<$signed(0)));

endmodule
