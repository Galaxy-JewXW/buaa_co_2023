`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:17:18 11/08/2023 
// Design Name: 
// Module Name:    stall_handle 
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
module stall_handle(
    input [31:0] D_instr,
    input [31:0] E_instr,
    input [31:0] M_instr,
    input E_MDU_busy,
    input E_MDU_start,
    output stall
    );

wire E_stall_rs;
wire E_stall_rt;
wire M_stall_rs;
wire M_stall_rt;
wire E_stall_mdu;
wire M_stall_eret;

assign stall = E_stall_rs | E_stall_rt | M_stall_rs | M_stall_rt | E_stall_mdu | M_stall_eret;

// get Tuse in level D
wire [4:0] D_rs;
wire [4:0] D_rt;
wire D_rc;
wire D_ic;
wire D_shift_s;
wire D_branch;
wire D_load;
wire D_store;
wire D_j2r;
wire [2:0] D_Tuse_rs;
wire [2:0] D_Tuse_rt;
wire D_md;
wire D_mf;
wire D_mt;
wire D_eret;
wire D_mtc0;

controller D_ctrl(
    .instr(D_instr),
    .rs(D_rs),
    .rt(D_rt),
    .R_type_calc(D_rc),
    .I_type_calc(D_ic),
    .shift_s(D_shift_s),
    .branch(D_branch),
    .load(D_load),
    .store(D_store),
    .jump_to_reg(D_j2r),
    .md(D_md),
    .mf(D_mf),
    .mt(D_mt),
    .eret(D_eret),
    .mtc0(D_mtc0)
);

assign D_Tuse_rs = (D_branch | D_j2r) ? 3'd0 :
                (D_ic | D_rc | D_load | (D_store && !D_shift_s) | D_mt | D_md) ? 3'd1 : 3'd3;

assign D_Tuse_rt = (D_branch) ? 3'd0 :
                    (D_rc | D_md) ? 3'd1 :
                    (D_store | D_mtc0) ? 3'd2 : 3'd3;


// get Tnew in Level E. 
wire [4:0] E_rs;
wire [4:0] E_rt;
wire [4:0] E_rd;
wire E_rc;
wire E_ic;
wire E_branch;
wire E_load;
wire E_store;
wire E_j2r;
wire [4:0] E_A3Sel;
wire [2:0] E_Tnew;
wire E_md;
wire E_mf;
wire E_mt;
wire E_mfc0;
wire E_mtc0;

controller E_ctrl(
    .instr(E_instr),
    .rs(E_rs),
    .rt(E_rt),
    .rd(E_rd),
    .A3Sel(E_A3Sel),
    .R_type_calc(E_rc),
    .I_type_calc(E_ic),
    .load(E_load),
    .mf(E_mf),
    .mfc0(E_mfc0),
    .mtc0(E_mtc0)
);

assign E_Tnew = (E_rc | E_ic | E_mf) ? 3'd1 :
                (E_load | E_mfc0) ? 3'd2 :
                3'd0;

assign E_stall_rs = (E_A3Sel == D_rs && D_rs != 5'd0) && (E_Tnew > D_Tuse_rs);
assign E_stall_rt = (E_A3Sel == D_rt && D_rt != 5'd0) && (E_Tnew > D_Tuse_rt);


// get Tnew in Level M. 
wire [4:0] M_rs;
wire [4:0] M_rt;
wire [4:0] M_rd;
wire M_rc;
wire M_ic;
wire M_branch;
wire M_load;
wire M_store;
wire M_j2r;
wire [4:0] M_A3Sel;
wire [2:0] M_Tnew;
wire M_mfc0;
wire M_mtc0;

controller M_ctrl(
    .instr(M_instr),
    .rs(M_rs),
    .rt(M_rt),
    .rd(M_rd),
    .A3Sel(M_A3Sel),
    .R_type_calc(M_rc),
    .I_type_calc(M_ic),
    .load(M_load),
    .mfc0(M_mfc0),
    .mtc0(M_mtc0)
);

assign M_Tnew = (M_load | M_mfc0) ? 3'd1 : 3'd0;

assign M_stall_rs = (M_A3Sel == D_rs && D_rs != 5'd0) && (M_Tnew > D_Tuse_rs);
assign M_stall_rt = (M_A3Sel == D_rt && D_rt != 5'd0) && (M_Tnew > D_Tuse_rt);
assign M_stall_eret = D_eret && ((E_mtc0 && E_rd == 5'd14) || (M_mtc0 && M_rd == 5'd14));

assign E_stall_mdu = ((D_mf | D_mt | D_md) && (E_MDU_busy | E_MDU_start));

endmodule
