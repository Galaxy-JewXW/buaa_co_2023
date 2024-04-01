`timescale 1ns / 1ps
`include "def.v"

module stall(
    input [31:0] D_Instr,
    input [31:0] E_Instr,
    input [31:0] M_Instr,
    output Stall
    );

    wire D_load, D_store, D_calc_r, D_calc_i, D_shift_s, D_branch, D_jump_reg;
    wire [4:0] D_rs_addr, D_rt_addr;
    control D_decoder(
        .Instr(D_Instr),

        .rs(D_rs_addr),
        .rt(D_rt_addr),

        .load(D_load),
        .store(D_store),
        .calc_r(D_calc_r),
        .calc_i(D_calc_i),
        .shift_s(D_shift_s),
        .branch(D_branch),
        .jump_reg(D_jump_reg)
    );

    wire [7:0] D_Tuse_rt, D_Tuse_rs;
    assign D_Tuse_rt = (D_branch) ? 0 :
                       (D_calc_r) ? 1 :
                       (D_store) ? 2 :
                       3;
    assign D_Tuse_rs = (D_branch | D_jump_reg) ? 0 :
                       (D_calc_i  | D_load | D_store | (D_calc_r & !D_shift_s)) ? 1 :
                       3;

    wire E_load, E_calc_r, E_calc_i;
    wire [4:0] E_GRFA3;
    control E_decoder(
        .Instr(E_Instr),
        .A3(E_GRFA3),
        .load(E_load),
        .calc_r(E_calc_r),
        .calc_i(E_calc_i)
    );

    wire [7:0] E_Tnew;
    assign E_Tnew = (E_calc_i | E_calc_r) ? 1 :
                    (E_load) ? 2 :
                    0;

    wire M_load;
    wire [4:0] M_GRFA3;
    control M_decoder(
        .Instr(M_Instr),
        .A3(M_GRFA3),
        .load(M_load)
    );

    wire [7:0] M_Tnew;
    assign M_Tnew = (M_load) ? 1 :
                    0;    

    // 根据Tuse和Tnew的值判断是否进行阻塞

    wire E_stall_rs = (E_GRFA3 == D_rs_addr && D_rs_addr != 0) && (E_Tnew > D_Tuse_rs);
    wire E_stall_rt = (E_GRFA3 == D_rt_addr && D_rt_addr != 0) && (E_Tnew > D_Tuse_rt);
    wire M_stall_rs = (M_GRFA3 == D_rs_addr && D_rs_addr != 0) && (M_Tnew > D_Tuse_rs);
    wire M_stall_rt = (M_GRFA3 == D_rt_addr && D_rt_addr != 0) && (M_Tnew > D_Tuse_rt);

    assign Stall = E_stall_rs | E_stall_rt | M_stall_rs | M_stall_rt;

endmodule
