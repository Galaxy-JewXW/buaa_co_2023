`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:09 11/08/2023 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input [31:0] instr,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] offset,
    output [25:0] imm,
    output [4:0] A3Sel,
    output [1:0] WDSel,
    output [3:0] ALUOp,
    output [2:0] MDUOp,
    output MDU_start,
    output ALUBSel,
    output MemWrite,
    output [2:0] PCSel,
    output EXTOp,
    output [2:0] CMPOp,
    output [2:0] DMOp,
    output R_type_calc,
    output I_type_calc,
    output branch,
    output link,
    output load,
    output store,
    output jump_to_addr,
    output jump_to_reg,
    output md,
    output mt,
    output mf
    );

wire [5:0] opcode; 
wire [5:0] funct; 

assign opcode = instr[31:26];
assign funct = instr[5:0];
assign rs = instr[25:21];
assign rt = instr[20:16];
assign rd = instr[15:11];
assign offset = instr[15:0];
assign imm = instr[25:0];

// parameter of funct, for R-type instructions.
parameter ADD  = 6'b100000,
          SUB  = 6'b100010,
          AND  = 6'b100100,
          OR   = 6'b100101,
          SLT  = 6'b101010,
          SLTU = 6'b101011,
          JR   = 6'b001000,
          MULT = 6'b011000,
          MULTU = 6'b011001,
          DIV = 6'b011010,
          DIVU = 6'b011011,
          MFHI = 6'b010000,
          MFLO = 6'b010010,
          MTHI = 6'b010001,
          MTLO = 6'b010011,
          ZERO = 6'b000000;

// parameter of opcode, for I-type and J-type instructions.
// I-Type
parameter ANDI = 6'b001100,
          ORI  = 6'b001101,
          ADDI = 6'b001000,
          LW  = 6'b100011,
          SW  = 6'b101011,
          BEQ = 6'b000100,
          BNE = 6'b000101,
          LUI = 6'b001111,
          JAL = 6'b000011,
          LB  = 6'b100000,
          SB  = 6'b101000,
          LH  = 6'b100001,
          SH  = 6'b101001;

// J-Type
parameter J = 6'b000010;


// identify instruction
wire zero, add, sub, ori, addi, lw, sw, beq, bne, lui, jal, jr, j, And, Or, slt, sltu;
wire lb, sb, lh, sh;
wire mult, multu, div, divu, mfhi, mflo, mthi, mtlo;

// R
assign zero = (opcode == ZERO);
assign add = (zero && (funct == ADD));
assign sub = (zero && (funct == SUB));
assign jr = (zero && (funct == JR));
assign And = (zero && (funct == AND));
assign Or = (zero && (funct == OR));
assign slt = (zero && (funct == SLT));
assign sltu = (zero && (funct == SLTU));
assign mult = (zero && (funct == MULT));
assign multu = (zero && (funct == MULTU));
assign div = (zero && (funct == DIV));
assign divu = (zero && (funct == DIVU));
assign mfhi = (zero && (funct == MFHI));
assign mflo = (zero && (funct == MFLO));
assign mthi = (zero && (funct == MTHI));
assign mtlo = (zero && (funct == MTLO));

// I and J
assign ori = (opcode == ORI);
assign addi = (opcode == ADDI);
assign andi = (opcode == ANDI);
assign lw = (opcode == LW);
assign sw = (opcode == SW);
assign beq = (opcode == BEQ);
assign bne = (opcode == BNE);
assign lui = (opcode == LUI);
assign jal = (opcode == JAL);
assign j = (opcode == J);
assign lb = (opcode == LB);
assign sb = (opcode == SB);
assign lh = (opcode == LH);
assign sh = (opcode == SH);

// classify
assign R_type_calc = add | sub | And | Or | slt | sltu;
assign I_type_calc = ori | addi | lui | andi;
assign branch = beq | bne;
assign link = jal;
assign load = lw | lb | lh;
assign store = sw | sb | sh;
assign jump_to_addr = j | jal;
assign jump_to_reg = jr;
assign md = mult | multu | div | divu;
assign mt = mtlo | mthi;
assign mf = mflo | mfhi;

assign A3Sel = (R_type_calc | mf) ? rd :
                (I_type_calc | load) ? rt :
                (link) ? 5'd31 : 5'd0;

assign WDSel = (R_type_calc | I_type_calc) ? `WDSel_aluans :
                (load) ? `WDSel_dmrd :
                (link) ? `WDSel_PCa8 : 
                (mf) ? `WDSel_mduans :`WDSel_aluans;

assign ALUOp = (lw || sw || add || addi) ? `ALU_add :
               (sub || beq) ? `ALU_sub :
               (Or || ori) ? `ALU_or :
               lui ? `ALU_lui :
               (And || andi) ? `ALU_and :
               (slt) ? `ALU_slt :
               (sltu) ? `ALU_sltu : `ALU_add;

assign MDUOp = mult ? `MDU_mult :
                multu ? `MDU_multu :
                div ? `MDU_div :
                divu ? `MDU_divu :
                mtlo ? `MDU_mtlo :
                mthi ? `MDU_mthi :
                mflo ? `MDU_mflo :
                mfhi ? `MDU_mfhi : `MDU_mult;

assign MDU_start = md;

assign ALUBSel = (R_type_calc) ? `ALUBSel_grf :
                (I_type_calc | load | store) ? `ALUBSel_imm : `ALUBSel_grf;

assign MemWrite = (store);

assign PCSel = (branch) ? `PCSel_branch :
                (jump_to_addr) ? `PCSel_j :
                (jump_to_reg) ? `PCSel_jr : `PCSel_PCa4;

assign EXTOp = (load | store | addi) ? `EXT_signed : `EXT_zero;

assign CMPOp = (beq) ? `CMP_beq : 
                (bne) ? `CMP_bne : `CMP_beq;

assign DMOp = (lw || sw) ? `DM_word :
              (lb || sb) ? `DM_byte :
              (lh || sh) ? `DM_halfword : 2'b00;

endmodule