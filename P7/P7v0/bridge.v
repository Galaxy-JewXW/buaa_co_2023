`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:29:11 11/22/2023 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
    input [31:0] m_data_rdata,
    input [31:0] m_temp_data_addr,
    input [31:0] m_temp_data_wdata,
    input [3:0] m_temp_data_byteen,
    input [31:0] TC0_out,
    input [31:0] TC1_out,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3:0] m_data_byteen,
    output [31:0] m_temp_data_rdata,
    output [31:0] TC0_addr,
    output TC0_WE,
    output [31:0] TC0_in,
    output [31:0] TC1_addr,
    output TC1_WE,
    output [31:0] TC1_in
    );

assign m_data_addr = m_temp_data_addr;
assign TC0_addr = m_temp_data_addr;
assign TC1_addr = m_temp_data_addr;

assign m_data_wdata = m_temp_data_wdata;
assign TC0_in = m_temp_data_wdata;
assign TC1_in = m_temp_data_wdata;

wire TC0Sel;
wire TC1Sel;
wire WE;
assign TC0Sel = (TC0_addr >= `TC1a && TC0_addr <= `TC1b);
assign TC1Sel = (TC1_addr >= `TC2a && TC1_addr <= `TC2b);
assign WE = (| m_temp_data_byteen);

assign TC0_WE = WE && TC0Sel;
assign TC1_WE = WE && TC1Sel;
assign m_data_byteen = (TC0Sel || TC1Sel) ? 4'b0000 : m_temp_data_byteen;
assign m_temp_data_rdata = TC0Sel ? TC0_out :
                            TC1Sel ? TC1_out : m_data_rdata;

endmodule
