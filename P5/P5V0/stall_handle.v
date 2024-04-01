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
    output stall
    );

wire E_stall_rs;
wire E_stall_rt;
wire M_stall_rs;
wire M_stall_rt;

assign stall = E_stall_rs | E_stall_rt | M_stall_rs | M_stall_rt;

// get Tuse in level D
wire [4:0] D_rs;
wire [4:0] D_rt;
wire D_rc;
wire D_ic;
wire D_branch;
wire D_load;
wire D_store;
wire D_j2r;
wire [2:0] D_Tuse_rs;
wire [2:0] D_Tuse_rt;

controller D_ctrl(
    .instr(D_instr),
    .rs(D_rs),
    .rt(D_rt),
    .R_type_calc(D_rc),
    .I_type_calc(D_ic),
    .branch(D_branch),
    .load(D_load),
    .store(D_store),
    .jump_to_reg(D_j2r)
);

assign D_Tuse_rs = (D_branch | D_j2r) ? 3'd0 :
                (D_ic | D_rc | D_load | D_store) ? 3'd1 : 3'd3;

assign D_Tuse_rt = (D_branch) ? 3'd0 :
                    (D_rc) ? 3'd1 :
                    (D_store) ? 3'd2 : 3'd3;


// get Tnew in Level E. 
wire [4:0] E_rs;
wire [4:0] E_rt;
wire E_rc;
wire E_ic;
wire E_branch;
wire E_load;
wire E_store;
wire E_j2r;
wire [4:0] E_A3Sel;
wire [2:0] E_Tnew;

controller E_ctrl(
    .instr(E_instr),
    .rs(E_rs),
    .rt(E_rt),
    .A3Sel(E_A3Sel),
    .R_type_calc(E_rc),
    .I_type_calc(E_ic),
    .load(E_load)
);

assign E_Tnew = (E_rc | E_ic) ? 3'd1 :
                (E_load) ? 3'd2 :
                3'd0;

assign E_stall_rs = (E_A3Sel == D_rs && D_rs != 5'd0) && (E_Tnew > D_Tuse_rs);
assign E_stall_rt = (E_A3Sel == D_rt && D_rt != 5'd0) && (E_Tnew > D_Tuse_rt);


// get Tnew in Level M. 
wire [4:0] M_rs;
wire [4:0] M_rt;
wire M_rc;
wire M_ic;
wire M_branch;
wire M_load;
wire M_store;
wire M_j2r;
wire [4:0] M_A3Sel;
wire [2:0] M_Tnew;

controller M_ctrl(
    .instr(M_instr),
    .rs(M_rs),
    .rt(M_rt),
    .A3Sel(M_A3Sel),
    .R_type_calc(M_rc),
    .I_type_calc(M_ic),
    .load(M_load)
);

assign M_Tnew = (M_load) ? 3'd1 : 3'd0;

assign M_stall_rs = (M_A3Sel == D_rs && D_rs != 5'd0) && (M_Tnew > D_Tuse_rs);
assign M_stall_rt = (M_A3Sel == D_rt && D_rt != 5'd0) && (M_Tnew > D_Tuse_rt);

endmodule
