`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:49 10/31/2023 
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

`define WDSel_aluans 2'b00
`define WDSel_dmrd 2'b01
`define WDSel_PCa4 2'b10


// Control signals of IFU are defined here.
`define PCSel_PCa4 2'b00
`define PCSel_branch 2'b01
`define PCSel_j 2'b10
`define PCSel_jr 2'b11


// Control signals of ALU are defined here.
`define ALU_add 3'b000
`define ALU_sub 3'b001
`define ALU_or 3'b010
`define ALU_lui 3'b011

`define ALUBSel_grf 1'b0
`define ALUBSel_imm 1'b1

// Control signal of EXT are defined here.
`define EXT_zero 1'b0
`define EXT_signed 1'b1


// Control signal of DM are defined here.
`define DM_word 2'b00
`define DM_halfword 2'b01
`define DM_byte 2'b10
