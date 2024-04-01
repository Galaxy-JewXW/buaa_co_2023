`timescale 1ns / 1ps

`include "ctrl.v"

module sfu(
    input [31:0] Instr_D,
    input [31:0] Instr_E,
    input [31:0] Instr_M,
    input [31:0] Instr_W,
	input Bcd_cmp_E,
	input Bcd_cmp_M,
	input Bcd_cmp_W,
    input Busy,
    input Start,

    output Stall,
    output [2:0] rsFsel_D,
    output [2:0] rtFsel_D,
    output [2:0] rsFsel_E,
    output [2:0] rtFsel_E,
    output [2:0] rtFsel_M
);
    wire [4:0] D_Rs, D_Rt, D_Rd;
    ctrl ctrl_sfu_d(.Instr(Instr_D), .cal_R(D_cal_R), .cal_I(D_cal_I),
    .Load(D_Load), .Store(D_Store), .Branch(D_Branch), .Jump(D_Jump),
    .J_link(D_J_link), .Hilo(D_Hilo), .Bcd(D_Bcd), .Rs(D_Rs), .Rt(D_Rt), .Rd(D_Rd));

    wire [4:0] E_Rs, E_Rt, E_Rd;
    ctrl ctrl_sfu_e(.Instr(Instr_E), .cal_R(E_cal_R), .cal_I(E_cal_I),
    .Load(E_Load), .Store(E_Store), .Branch(E_Branch), .Jump(E_Jump),
    .J_link(E_J_link), .Bcd(E_Bcd), .Rs(E_Rs), .Rt(E_Rt), .Rd(E_Rd));

    wire [4:0] M_Rs, M_Rt, M_Rd;
    ctrl ctrl_sfu_m(.Instr(Instr_M), .cal_R(M_cal_R), .cal_I(M_cal_I),
    .Load(M_Load), .Store(M_Store), .Branch(M_Branch), .Jump(M_Jump),
    .J_link(M_J_link), .Bcd(M_Bcd), .Rs(M_Rs), .Rt(M_Rt), .Rd(M_Rd));

    wire [4:0] W_Rs, W_Rt, W_Rd;
    ctrl ctrl_sfu_w(.Instr(Instr_W), .cal_R(W_cal_R), .cal_I(W_cal_I),
    .Load(W_Load), .Store(W_Store), .Branch(W_Branch), .Jump(W_Jump),
    .J_link(W_J_link), .Bcd(W_Bcd), .Rs(W_Rs), .Rt(W_Rt), .Rd(W_Rd));

    wire [2:0] Tuse_rs, Tuse_rt;
    wire [2:0] Tnew_E, Tnew_M, Tnew_W;

    assign Tuse_rs = (D_Jump || D_Branch || D_Bcd) ? 0 :
                     (D_cal_R || D_cal_I || D_Load || D_Store) ? 1 :
                     7;
    assign Tuse_rt = (D_Branch || D_Bcd) ? 0 :
                     (D_cal_R) ? 1 :
                     (D_Store) ? 2 :
                     7;

    assign Tnew_E = (E_cal_I || E_cal_R) ? 1 :
                    (E_Load) ? 2 :
                    0;
    assign Tnew_M = (M_Load) ? 1 :
                    0;
    assign Tnew_W = 0;

                    //rs
    assign Stall =  ((D_Jump || D_Branch || D_Bcd) && E_cal_R) && (D_Rs == E_Rd) && (E_Rd) ||
                    ((D_Jump || D_Branch || D_Bcd) && E_cal_I) && (D_Rs == E_Rt) && (E_Rt) ||
                    ((D_Jump || D_Branch || D_Bcd || D_cal_R || D_cal_I || D_Load || D_Store) && E_Load) && (D_Rs == E_Rt) && (E_Rt) ||
                    ((D_Jump || D_Branch || D_Bcd) && M_Load) && (D_Rs == M_Rt) && (M_Rt) ||
                    //rt
                    ((D_Branch || D_Bcd) && E_cal_R) && (D_Rt == E_Rd) && (E_Rd) ||
                    ((D_Branch || D_Bcd) && E_cal_I) && (D_Rt == E_Rt) && (E_Rt) ||
                    ((D_Branch || D_Bcd || D_cal_R) && E_Load) && (D_Rt == E_Rt) && (E_Rt) ||
                    ((D_Branch || D_Bcd) && M_Load) && (D_Rt == M_Rt) && (M_Rt) ||
                    //hilo
                    ((Busy || Start) && D_Hilo);

    /*forward
    0: RD1 / RD2
    1: PC_E8
    2: aluOut_M
    3: PC_M8
    4: dmOut_W
    5: PC_W8    
    */
	 
	 wire suc_Bcd_E, suc_Bcd_M, suc_Bcd_W;
	 assign suc_Bcd_E = Bcd_cmp_E & E_Bcd;
	 assign suc_Bcd_M = Bcd_cmp_M & M_Bcd;
	 assign suc_Bcd_W = Bcd_cmp_W & W_Bcd;
	 
    assign rsFsel_D = ((E_J_link || suc_Bcd_E) && (D_Rs == 31) && D_Rs)  ? 1 :
                      (M_cal_R && (D_Rs == M_Rd) && D_Rs) || (M_cal_I && (D_Rs == M_Rt) && D_Rs) ? 2 :
                      ((M_J_link || suc_Bcd_M) && (D_Rs == 31) && D_Rs)  ? 3 :
                      (W_cal_R && (D_Rs == W_Rd) && D_Rs) || ((W_cal_I || W_Load) && (D_Rs == W_Rt) && D_Rs) ? 4 :
                      ((W_J_link || suc_Bcd_W) && (D_Rs == 31) && D_Rs)  ? 5 : 0;

    assign rtFsel_D = ((E_J_link || suc_Bcd_E) && (D_Rt == 31) && D_Rt)  ? 1 :
                      (M_cal_R && (D_Rt == M_Rd) && D_Rt) || (M_cal_I && (D_Rt == M_Rt) && D_Rt) ? 2 :
                      ((M_J_link || suc_Bcd_M) && (D_Rt == 31) && D_Rt)  ? 3 :
                      (W_cal_R && (D_Rt == W_Rd) && D_Rt) || ((W_cal_I || W_Load) && (D_Rt == W_Rt) && D_Rt) ? 4 :
                      ((W_J_link || suc_Bcd_W) && (D_Rt == 31) && D_Rt)  ? 5 : 0;

    assign rsFsel_E = (M_cal_R && (E_Rs == M_Rd) && E_Rs) || (M_cal_I && (E_Rs == M_Rt) && E_Rs) ? 2 :
                      ((M_J_link || suc_Bcd_M) && (E_Rs == 31) && E_Rs)  ? 3 :
                      (W_cal_R && (E_Rs == W_Rd) && E_Rs) || ((W_cal_I || W_Load) && (E_Rs == W_Rt) && E_Rs) ? 4 :
                      ((W_J_link || suc_Bcd_W) && (E_Rs == 31) && E_Rs)  ? 5 : 0;

    assign rtFsel_E = (M_cal_R && (E_Rt == M_Rd) && E_Rt) || (M_cal_I && (E_Rt == M_Rt) && E_Rt) ? 2 :
                      ((M_J_link || suc_Bcd_M) && (E_Rt == 31) && E_Rt)  ? 3 :
                      (W_cal_R && (E_Rt == W_Rd) && E_Rt) || ((W_cal_I || W_Load) && (E_Rt == W_Rt) && E_Rt) ? 4 :
                      ((W_J_link || suc_Bcd_W) && (E_Rt == 31) && E_Rt)  ? 5 : 0;
    
    assign rtFsel_M = (W_cal_R && (M_Rt == W_Rd) && M_Rt) || ((W_cal_I || W_Load) && (M_Rt == W_Rt) && M_Rt) ? 4 :
                      ((W_J_link || suc_Bcd_W) && (M_Rt == 31) && M_Rt)  ? 5 : 0;

endmodule