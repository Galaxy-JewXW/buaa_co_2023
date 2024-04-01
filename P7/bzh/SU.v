`timescale 1ns / 1ps

module SU(
  input [31:0] D_inStr,
  input [31:0] E_inStr,
  input [31:0] M_inStr,
  input hl_busy,
  output stall
    );

//------D------
wire [3:0] D_T_use_rt, D_T_use_rs;

wire D_calr, D_cali, D_store, D_load, D_jump_imm, D_jump_reg, D_branch_r, D_branch_i, D_shift_reg, D_shift_shamt;
wire D_cal_hl, D_read_hl, D_write_hl;
wire D_cp0_read, D_cp0_write;
wire [4:0] D_rs_addr,D_rt_addr;
wire [4:0] D_rs, D_rt, D_rd;
wire D_eret;

ctrl D_classifyer(
  .inStr(D_inStr),
  .rs(D_rs),
  .rt(D_rt),
  .rd(D_rd),

  .calr(D_calr),
  .cali(D_cali),
  .store(D_store),
  .load(D_load),
  .jump_imm(D_jump_imm),
  .jump_reg(D_jump_reg),
  .branch_r(D_branch_r),
  .branch_i(D_branch_i),
  .shift_reg(D_shift_reg),
  .shift_shamt(D_shift_shamt),
  
  .cal_hl(D_cal_hl),
  .read_hl(D_read_hl),
  .write_hl(D_write_hl),

  .cp0_read(D_cp0_read),
  .cp0_write(D_cp0_write),
  .eret(D_eret)
);

assign D_T_use_rt = (D_branch_r) ? 4'd0 :
                    (D_calr | D_shift_reg | D_shift_shamt | D_cal_hl) ? 4'd1 :
                    (D_store | D_cp0_write) ? 4'd2 :
                    4'd3;

assign D_T_use_rs = (D_branch_r | D_branch_i | D_jump_reg) ? 4'd0 :
                    (D_calr | D_cali | D_store | D_load | D_shift_reg | D_cal_hl | D_write_hl) ? 4'd1 :
                    4'd3;

//------E------
wire [3:0] E_T_new;
wire E_calr, E_cali, E_store, E_load, E_jump_imm, E_jump_reg, E_branch_r, E_branch_i, E_shift_reg, E_shift_shamt;
wire E_cal_hl, E_read_hl, E_write_hl;
wire E_cp0_read, E_cp0_write;
wire [4:0] E_rs_addr,E_rt_addr;
wire [4:0] E_dst, E_rd;

ctrl E_classifyer(
  .inStr(E_inStr),
  .rd(E_rd),
  .dst(E_dst),
  .calr(E_calr),
  .cali(E_cali),
  .store(E_store),
  .load(E_load),
  .jump_imm(E_jump_imm),
  .jump_reg(E_jump_reg),
  .branch_r(E_branch_r),
  .branch_i(E_branch_i),
  .shift_reg(E_shift_reg),
  .shift_shamt(E_shift_shamt),

  .cal_hl(E_cal_hl),
  .read_hl(E_read_hl),
  .write_hl(E_write_hl),

  .cp0_write(E_cp0_write),
  .cp0_read(E_cp0_read)
);

assign E_T_new = (E_calr | E_cali | E_shift_reg | E_shift_shamt | E_read_hl) ? 4'd1 :
                  (E_load | E_cp0_read) ? 4'd2 :
                  4'd0;

//------M------
wire [3:0] M_T_new;
wire M_calr, M_cali, M_store, M_load, M_jump_imm, M_jump_reg, M_branch_r, M_branch_i, M_shift_reg, M_shift_shamt;
wire M_cp0_read, M_cp0_write;
wire [4:0] M_rs_addr,M_rt_addr;
wire [4:0] M_dst, M_rd;

ctrl M_classifyer(
  .inStr(M_inStr),
  .rd(M_rd),
  .dst(M_dst),
  .calr(M_calr),
  .cali(M_cali),
  .store(M_store),
  .load(M_load),
  .jump_imm(M_jump_imm),
  .jump_reg(M_jump_reg),
  .branch_r(M_branch_r),
  .branch_i(M_branch_i),
  .shift_reg(M_shift_reg),
  .shift_shamt(M_shift_shamt),

  .cp0_write(M_cp0_write),
  .cp0_read(M_cp0_read)
);

assign M_T_new = (M_load | M_cp0_read) ? 4'd1 :
                  4'd0;

wire E_stall_rs = (E_dst==D_rs & D_rs!=0) & (E_T_new>D_T_use_rs);
wire E_stall_rt = (E_dst==D_rt & D_rt!=0) & (E_T_new>D_T_use_rt);

wire M_stall_rs = (M_dst==D_rs & D_rs!=0) & (M_T_new>D_T_use_rs);
wire M_stall_rt = (M_dst==D_rt & D_rt!=0) & (M_T_new>D_T_use_rt);

wire E_hl_busy = (D_write_hl | D_read_hl | D_cal_hl) & (E_cal_hl | hl_busy);

wire D_stall_eret = D_eret & ((E_cp0_write & E_rd==5'd14) | (M_cp0_write & M_rd==5'd14));

assign stall = E_stall_rs | E_stall_rt | M_stall_rs | M_stall_rt | E_hl_busy | D_stall_eret;

endmodule