`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:43 11/07/2023 
// Design Name: 
// Module Name:    def 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
// Control signals of GRF are defined here.
`define A3Sel_rt 2'b00
`define A3Sel_rd 2'b01
`define A3Sel_ra 2'b10

`define WDSel_aluans 3'b000
`define WDSel_dmrd 3'b001
`define WDSel_PCa8 3'b010
`define WDSel_mduans 3'b011
`define WDSel_cp0out 3'b100


// Control signals of IFU are defined here.
`define PCSel_PCa4 3'b000
`define PCSel_branch 3'b001
`define PCSel_j 3'b010
`define PCSel_jr 3'b011


// Control signals of ALU are defined here.
`define ALU_add 4'b0000
`define ALU_sub 4'b0001
`define ALU_or 4'b0010
`define ALU_lui 4'b0011
`define ALU_and 4'b0100
`define ALU_slt 4'b0101
`define ALU_sltu 4'b0110
`define ALU_srl 4'b0111

`define ALUASel_rs 2'b00
`define ALUASel_rt 2'b01

`define ALUBSel_grf 2'b00
`define ALUBSel_imm 2'b01
`define ALUBSel_shamt 2'b10


// Control signal of EXT are defined here.
`define EXT_zero 1'b0
`define EXT_signed 1'b1


// Control signal of CMP are defined here.
`define CMP_beq 3'b000
`define CMP_bne 3'b001

// Control signal of DM are defined here.
`define DM_word 3'b000
`define DM_halfword 3'b001
`define DM_byte 3'b010

`define MDU_mult 3'b000
`define MDU_multu 3'b001
`define MDU_div 3'b010
`define MDU_divu 3'b011
`define MDU_mfhi 3'b100
`define MDU_mflo 3'b101
`define MDU_mthi 3'b110
`define MDU_mtlo 3'b111

`define EXC_Int 5'd0
`define EXC_AdEL 5'd4
`define EXC_AdES 5'd5
`define EXC_syscall 5'd8
`define EXC_RI 5'd10
`define EXC_Ov 5'd12
`define EXC_None 5'd0

`define DMa 32'h0000_0000
`define DMb 32'h0000_2fff
`define TC1a 32'h0000_7f00
`define TC1b 32'h0000_7f0b
`define TC2a 32'h0000_7f10
`define TC2b 32'h0000_7f1b