`timescale 1ns / 1ps
`include "def.v"


module control(
    input [31:0] Instr,
    input b_jump,

    output [4:0] rt,
    output [4:0] rs,
    output [4:0] rd,
    output [4:0] shamt,
    output [15:0] imm16,
    output [25:0] imm26,

    output [3:0] ALUOp,
    output [2:0] CMPOp,
    output [2:0] DMOp,
    output [4:0] A3,
    output [1:0] WDSel,
    output [1:0] ALUBSel,
    output [1:0] ALUASel,
    output DMEn,
    output EXTOp,
    output [2:0] NPCOp,

    output load,
    output store,
    output calc_r,
    output calc_i,
    output shift_s,
    output shift_v,
    output branch,
    output jump_reg,
    output jump_addr,
    output jump_link
    );

    wire [5:0] opcode = Instr[31:26];
    wire [5:0] funct = Instr[5:0];
    assign rs = Instr[25:21];
    assign rt = Instr[20:16];
    assign rd = Instr[15:11];
    assign imm16 = Instr[15:0];
    assign imm26 = Instr[25:0];
    assign shamt = Instr[10:6];

    wire add = (opcode == `op_R && funct == `fun_ADD);
    wire sub = (opcode == `op_R && funct == `fun_SUB);
    wire ori = (opcode == `op_ORI);
    wire lui = (opcode == `op_LUI);
    wire lw = (opcode == `op_LW);
    wire sw = (opcode == `op_SW);
    wire beq = (opcode == `op_BEQ);
    wire j = (opcode == `op_J);
    wire jal = (opcode == `op_JAL);
    wire jr = (opcode == `op_JR && funct == `fun_JR);
    wire jalr = (opcode == `op_JALR && funct == `fun_JALR);

    wire lb = (opcode == `op_LB);
    wire sb = (opcode == `op_SB);
    wire lh = (opcode == `op_LH);
    wire sh = (opcode == `op_SH);
    wire lbu = (opcode == `op_LBU);
    wire lhu = (opcode == `op_LHU);
    wire slt = (opcode == `op_R && funct == `fun_SLT);
    wire sll = (opcode == `op_R && funct == `fun_SLL);
    wire sllv = (opcode == `op_R && funct == `fun_SLLV);
    wire bltzal = (opcode == 6'b000001 && rt == 5'b10000);
    wire branch_link = bltzal;    

    assign ALUOp = (sub) ? `ALU_sub :
                   (ori) ? `ALU_or :
                   (lui) ? `ALU_lui :
                   (slt) ? `ALU_slt :
                   `ALU_add;
    assign EXTOp = (load | store | beq) ? `EXT_sign :
                   `EXT_unsign;
    assign CMPOp = (beq) ? `CMP_beq :
                   (bltzal) ? `CMP_bltzal :
                   3'b000;
    assign NPCOp = (branch) ? `NPC_b :
                   (jump_addr) ? `NPC_j_jal :
                   (jump_reg) ? `NPC_jr_jalr :
                   `NPC_pc4;
    assign DMOp = (lw | sw) ? `DM_w :
                  (lh | sh) ? `DM_h :
                  (lb | sb) ? `DM_b :
                  (lhu) ? `DM_hu :
                  (lbu) ? `DM_bu :
                  `DM_w;

    assign DMEn = (store);
    assign WDSel = (jump_link | branch_link) ? `WDSel_pc8 :
                      (load) ? `WDSel_dmrd :
                      `WDSel_alures;

    assign A3 = (calc_r | jalr) ? rd :
                   (calc_i | load) ? rt :
                   (jal | branch_link) ? 5'd31 :
                   5'd0;

    assign ALUBSel = (calc_r) ? `BSel_rt : 
                     (calc_i | load | store) ? `BSel_imm :
                     (shift_s) ? `BSel_shamt :
                     (shift_v) ? `BSel_rs :
                     `BSel_rt;

    assign ALUASel = (shift_s | shift_v) ? `ASel_rt :
                     `ASel_rs;


    assign load   = lw | lh | lhu | lbu | lb;
    assign store  = sw | sh | sb;
    assign branch = beq | bltzal; 
           
    assign calc_r = add | sub | slt | sll | sllv;
    assign calc_i = ori | lui;
    assign shift_s  = sll;
    assign shift_v = sllv;


    assign jump_reg = jr | jalr;
    assign jump_addr = j | jal;
    assign jump_link = jal | jalr;
endmodule
