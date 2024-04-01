`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:44:47 11/22/2023 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,                    // 时钟信号
    input reset,                  // 同步复位信号
    input interrupt,              // 外部中断信号
    output [31:0] macroscopic_pc, // 宏观 PC

    output [31:0] i_inst_addr,    // IM 读取地址（取指 PC）
    input  [31:0] i_inst_rdata,   // IM 读取数据

    output [31:0] m_data_addr,    // DM 读写地址
    input  [31:0] m_data_rdata,   // DM 读取数据
    output [31:0] m_data_wdata,   // DM 待写入数据
    output [3 :0] m_data_byteen,  // DM 字节使能信号

    output [31:0] m_int_addr,     // 中断发生器待写入地址
    output [3 :0] m_int_byteen,   // 中断发生器字节使能信号

    output [31:0] m_inst_addr,    // M 级 PC

    output w_grf_we,              // GRF 写使能信号
    output [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output [31:0] w_grf_wdata,    // GRF 待写入数据

    output [31:0] w_inst_addr     // W 级 PC
    );

wire [31:0] TC0_addr;
wire TC0_WE;
wire [31:0] TC0_in;
wire [31:0] TC0_out;
wire TC0_IRQ;

wire [31:0] TC1_addr;
wire TC1_WE;
wire [31:0] TC1_in;
wire [31:0] TC1_out;
wire TC1_IRQ;

TC TC0(
    .clk(clk),
    .reset(reset),
    .Addr(TC0_addr[31:2]),
    .WE(TC0_WE),
    .Din(TC0_in),
    .Dout(TC0_out),
    .IRQ(TC0_IRQ)
);

TC TC1(
    .clk(clk),
    .reset(reset),
    .Addr(TC1_addr[31:2]),
    .WE(TC1_WE),
    .Din(TC1_in),
    .Dout(TC1_out),
    .IRQ(TC1_IRQ)
);

wire [31:0] m_temp_data_addr;
wire [31:0] m_temp_data_rdata;
wire [31:0] m_temp_data_wdata;
wire [3:0] m_temp_data_byteen;

wire [5:0] HWInt;
wire HWIntResponse;
assign HWInt = {3'b000, interrupt, TC1_IRQ, TC0_IRQ};

cpu CPU(
    .clk(clk),
    .reset(reset),
    .HWInt(HWInt),
    .macroscopic_pc(macroscopic_pc),
    .i_inst_rdata(i_inst_rdata),
    .m_data_rdata(m_temp_data_rdata),
    .i_inst_addr(i_inst_addr),
    .m_data_addr(m_temp_data_addr),
    .m_data_wdata(m_temp_data_wdata),
    .m_data_byteen(m_temp_data_byteen),
    .m_inst_addr(m_inst_addr),
    .w_grf_we(w_grf_we),
    .w_grf_addr(w_grf_addr),
    .w_grf_wdata(w_grf_wdata),
    .w_inst_addr(w_inst_addr),
    .HWIntResponse(HWIntResponse)
);

wire [31:0] bridge_m_data_addr;
wire [3:0] bridge_m_data_byteen;

bridge Bridge(
    .m_data_rdata(m_data_rdata),
    .m_temp_data_addr(m_temp_data_addr),
    .m_temp_data_wdata(m_temp_data_wdata),
    .m_temp_data_byteen(m_temp_data_byteen),
    .TC0_out(TC0_out),
    .TC1_out(TC1_out),
    .m_data_addr(bridge_m_data_addr),
    .m_data_wdata(m_data_wdata),
    .m_data_byteen(bridge_m_data_byteen),
    .m_temp_data_rdata(m_temp_data_rdata),
    .TC0_addr(TC0_addr),
    .TC0_WE(TC0_WE),
    .TC0_in(TC0_in),
    .TC1_addr(TC1_addr),
    .TC1_WE(TC1_WE),
    .TC1_in(TC1_in)
);

assign m_data_addr = (HWIntResponse && interrupt) ? 32'h0000_7f20 : bridge_m_data_addr;
assign m_data_byteen = (HWIntResponse && interrupt) ? 4'b0001 : bridge_m_data_byteen;

assign m_int_addr = (HWIntResponse && interrupt) ? 32'h0000_7f20 : bridge_m_data_addr;
assign m_int_byteen = (HWIntResponse && interrupt) ? 4'b0001 : bridge_m_data_byteen;

endmodule
