`timescale 1ns / 1ps
`include "def.v"

module mips(
    input clk,
    input reset
    );
	 wire [31:0] F_Instr,E_Instr,D_Instr,M_Instr,W_Instr;
	 wire [31:0] F_PC,D_PC,E_PC,M_PC,W_PC;
	 wire [4:0] E_A3,M_A3,W_A3;
	 wire [31:0] E_WD,M_WD,W_WD;
	 wire D_b_jump,E_b_jump,M_b_jump,W_b_jump;
	 wire Stall;
	 
    stall stall(
		.D_Instr(D_Instr),
		.E_Instr(E_Instr),
		.M_Instr(M_Instr),
		.Stall(Stall)
	 );
	 wire de_empty = Stall;
	 wire de_en = 1;
	 wire F_PCEn = !Stall;
	 wire [31:0] NPC;
	 
	 //F
	 wire fd_en = !Stall;
	 F_IFU f_ifu(
		.clk(clk),
		.reset(reset),
		.PCEn(F_PCEn),
		.NPC(NPC),
		.Instr(F_Instr),
		.PC(F_PC)
	 );
	 
	 //D 
	 //decode
	 wire [4:0] D_rt_addr,D_rs_addr,D_rd_addr;
	 wire [2:0] D_NPCOp;
	 wire [2:0] D_CMPOp;
	 wire EXTOp;
	 wire [15:0] D_imm16;
	 wire [25:0] D_imm26;
	 wire [31:0] D_imm32;
	 wire [31:0] D_rs,D_rt;
	 
	 FD_PASS fd_pass(
		.clk(clk),
		.reset(reset),
		.En(fd_en),
		 
		.F_PC(F_PC),
		.F_Instr(F_Instr),
		.D_PC(D_PC),
		.D_Instr(D_Instr)
	 );
	 
	 control D_CTRL(
        .Instr(D_Instr),
		  
        .rs(D_rs_addr),
        .rt(D_rt_addr),
        .imm16(D_imm16),
        .imm26(D_imm26),
        .CMPOp(D_CMPOp),
        .NPCOp(D_NPCOp),
        .EXTOp(D_EXTOp)
    );
	 
	 D_GRF d_grf(
		.PC(W_PC),
		.A1(D_rs_addr),
		.A2(D_rt_addr),
		.A3(W_A3),
		.WD(W_WD),
		.clk(clk),
		.reset(reset),
		.RD1(D_rs),
		.RD2(D_rt)
	 );
	 
	 wire [31:0] D_real_rs = (D_rs_addr == 0) ? 0:
							(D_rs_addr == E_A3) ? E_WD:
							(D_rs_addr == M_A3) ? M_WD:
							D_rs;
	 wire [31:0] D_real_rt = (D_rt_addr == 0) ? 0:
							(D_rt_addr == E_A3) ? E_WD:
							(D_rt_addr == M_A3) ? M_WD:
							D_rt;
	 D_CMP d_cmp(
		.CMPOp(D_CMPOp),
		.rs(D_real_rs),
		.rt(D_real_rt),
		.jump(D_b_jump)
	 );
	 
	 D_NPC d_npc(
		.NPCOp(D_NPCOp),
		.D_PC(D_PC),
		.F_PC(F_PC),
		.b_jump(D_b_jump),
		.imm26(D_imm26),
		.imm16(D_imm16),
		.re(D_real_rs),
		.NPC(NPC)
	 );
	 
	 D_EXT d_ext(
		.imm16(D_imm16),
		.EXTOp(D_EXTOp),
		.imm32(D_imm32)
	 );
	 //E
	 wire [4:0] E_rs_addr,E_rt_addr;
	 wire [4:0] E_ALUshamt;
	 wire [31:0] E_rs,E_rt;
	 wire [31:0] E_imm32; 

	 wire [3:0] E_ALUOp;
	 wire [1:0] E_ALUASel,E_ALUBSel,E_WDSel;

	 DE_PASS de_pass(
		.clk(clk),
		.reset(reset),
		.Empty(de_empty),
		.En(de_en),
		
		.D_PC(D_PC),
		.D_Instr(D_Instr),
		.D_imm32(D_imm32),
		.D_rs(D_real_rs),
		.D_rt(D_real_rt),
		
		.D_b_jump(D_b_jump),
		.E_PC(E_PC),
		.E_Instr(E_Instr),
		.E_imm32(E_imm32),
		.E_rs(E_rs),
		.E_rt(E_rt),
		.E_b_jump(E_b_jump)
	 );
	 
	 control E_control(
		.Instr(E_Instr),
		.b_jump(E_b_jump),
		
		.rs(E_rs_addr),
		.rt(E_rt_addr),
		.shamt(E_ALUshamt),
		
		.ALUOp(E_ALUOp),
		.A3(E_A3),
		.WDSel(E_WDSel),
		.ALUBSel(E_ALUBSel),
		.ALUASel(E_ALUASel)
	 );
	 
	 wire [31:0] E_real_rs = (E_rs_addr == 0) ? 0:
				              	 (E_rs_addr == M_A3) ? M_WD :
					             (E_rs_addr == W_A3) ? W_WD :
					             E_rs;
	 wire [31:0] E_real_rt = (E_rt_addr == 0) ? 0:
					             (E_rt_addr == M_A3) ? M_WD :
					             (E_rt_addr == W_A3) ? W_WD :
					             E_rt;
	 assign E_WD = E_WDSel == `WDSel_pc8 ? E_PC + 8 : 32'bz;
	 
	 wire [31:0] E_ALURes;
	 
	 wire [31:0] E_ALUA = (E_ALUASel==`ASel_rt) ? E_real_rt :
								 (E_ALUASel==`ASel_rs) ? E_real_rs : 0;
	 
	 wire [31:0] E_ALUB = (E_ALUBSel==`BSel_rt) ? E_real_rt : 
								 (E_ALUBSel==`BSel_imm) ? E_imm32 :
								 (E_ALUBSel==`BSel_shamt) ? {27'b0,E_ALUshamt} :
								 (E_ALUBSel==`BSel_rs) ? {27'b0,E_real_rs[4:0]} : 0;
 	 E_ALU e_alu(
		.A(E_ALUA),
		.B(E_ALUB),
		.ALUOp(E_ALUOp),
		.C(E_ALURes)
	 );
	 
	 //M
	 wire [31:0] M_rt;
	 wire [31:0] M_imm32;
	 wire [31:0] M_ALURes;
	 
	 EM_PASS em_pass(
		.clk(clk),
		.reset(reset),
		
		.E_PC(E_PC),
		.E_Instr(E_Instr),
		.E_ALURes(E_ALURes),
		.E_rt(E_real_rt),
		.E_imm32(E_imm32),
		.E_b_jump(E_b_jump),
				
		.M_PC(M_PC),
		.M_Instr(M_Instr),
		.M_ALURes(M_ALURes),
		.M_rt(M_rt),
		.M_imm32(M_imm32),
		.M_b_jump(M_b_jump)
	 );
	 
	 wire [4:0] M_rt_addr;
	 wire M_DMEn;
	 wire [2:0] M_DMOp;
	 wire [1:0] M_WDSel;
	 
	 control M_control( 
		.Instr(M_Instr),
		.b_jump(M_b_jump),
		
		.rt(M_rt_addr),
		.DMOp(M_DMOp),
		.DMEn(M_DMEn),
		.A3(M_A3),
		.WDSel(M_WDSel)
	 );
	 
	 wire [31:0] M_real_rt = (M_rt_addr == 0) ? 0 :
							(M_rt_addr == W_A3) ? W_WD :
							M_rt;
	 assign M_WD = (M_WDSel == `WDSel_pc8) ? M_PC + 8:
					 (M_WDSel == `WDSel_alures) ? M_ALURes : 32'dz;
     
    wire [31:0] M_DMRD;
	 
	 M_DM d_dm(
		.clk(clk),
		.reset(reset),
		
		.PC(M_PC),
		.Addr(M_ALURes),
		.WD(M_real_rt),		
		.DMEn(M_DMEn),
		.DMOp(M_DMOp),
		
		.RD(M_DMRD)
	 );
	 
	 //W
	 wire [31:0] W_ALURes;   
    wire [31:0] W_DMRD;     
    MW_PASS mw_pass(
        .clk(clk),
        .reset(reset),
		  
        .M_PC(M_PC),
        .M_Instr(M_Instr),
        .M_ALURes(M_ALURes),
        .M_DMRD(M_DMRD),
        .M_b_jump(M_b_jump),

        .W_PC(W_PC),
        .W_Instr(W_Instr),
        .W_ALURes(W_ALURes),
        .W_DMRD(W_DMRD), 
        .W_b_jump(W_b_jump)
    );
	 
	 wire W_En;
	 wire [1:0] W_WDSel;
	 
	 control W_CTRL(
        .Instr(W_Instr),
        .b_jump(W_b_jump),
        
        .A3(W_A3),
        .WDSel(W_WDSel)
    );

    assign W_WD = W_WDSel == `WDSel_pc8 ? W_PC + 8 :
                  W_WDSel == `WDSel_alures ? W_ALURes :
                  W_WDSel == `WDSel_dmrd ? W_DMRD :
                  32'dz;
endmodule
