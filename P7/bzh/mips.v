`timescale 1ns / 1ps

`define EXC_Int     5'd0
`define EXC_AdEL    5'd4
`define EXC_AdES    5'd5
`define EXC_RI      5'd10
`define EXC_Ov      5'd12
`define EXC_None    5'd0

module mips(
  input clk,
  input reset,
  input interrupt,
  output [31:0] macroscopic_pc, // 宏观 PC

  output [31:0] i_inst_addr,    // F_PC
  input  [31:0] i_inst_rdata,   // F_inStr

  output [31:0] m_data_addr,    // DM_addr
  input  [31:0] m_data_rdata,   // DM_dataRead
  output [31:0] m_data_wdata,   // DM_dataWrite
  output [3 :0] m_data_byteen,  // DM_byteen

  output [31:0] m_int_addr,     // INT_addr
  output [3 :0] m_int_byteen,   // INT_byteen
  output [31:0] m_inst_addr,    // M_PC

  output w_grf_we,              // GRF_WE
  output [4 :0] w_grf_addr,     // GRF_addr
  output [31:0] w_grf_wdata,    // GRF_dataWrite
  output [31:0] w_inst_addr,    // W_PC
  
  output [4:0] exccode,
  output [31:0] d_pc,
  output [31:0] e_pc,
  output [31:0] epc,
  output [31:0] npc,
  output stall,
  output req,
  output [5:0] intcode
    );
assign intcode=INTcode;

wire timer0_INT, timer1_INT;
wire [5:0] INTcode = {3'b0,interrupt,timer1_INT,timer0_INT};

wire [31:0] CPU_data = m_data_wdata;
wire [31:0] CPU_addr = m_data_addr;
wire [3:0] CPU_byteen = m_data_byteen;

wire [31:0] Bridge_dataRead;
wire [31:0] DM_dataRead = m_data_rdata;
wire [31:0] timer0_dataRead;
wire [31:0] timer1_dataRead;

wire [3:0] DM_byteen;
wire timer0_WE, timer1_WE;

CPU CPU(
  .clk(clk),
  .reset(reset),
  .INTcode(INTcode),
  
  .macroscopic_pc(macroscopic_pc),
  .i_inst_addr(i_inst_addr),
  .i_inst_rdata(i_inst_rdata),

  .m_data_addr(m_data_addr),
  .m_data_rdata(Bridge_dataRead),
  .m_data_wdata(m_data_wdata),
  .m_data_byteen(m_data_byteen),

  .m_int_addr(m_int_addr),
  .m_int_byteen(m_int_byteen),
  .m_inst_addr(m_inst_addr),

  .w_grf_we(w_grf_we),
  .w_grf_addr(w_grf_addr),
  .w_grf_wdata(w_grf_wdata),
  .w_inst_addr(w_inst_addr),

  .exccode(exccode),
  .d_pc(d_pc),
  .e_pc(e_pc),
  .epc(epc),
  .npc(npc),
  .stall(stall),
  .req(req)
);

TC time0(
  .clk(clk),
  .reset(reset),
  .address(CPU_addr[31:2]),
  .WE(timer0_WE),
  .dataIn(CPU_data),
  .dataOut(timer0_dataRead),
  .IRQ(timer0_INT)
);

TC time1(
  .clk(clk),
  .reset(reset),
  .address(CPU_addr[31:2]),
  .WE(timer1_WE),
  .dataIn(CPU_data),
  .dataOut(timer1_dataRead),
  .IRQ(timer1_INT)
);

Bridge Bridge(
  .CPU_addr(CPU_addr),
  .CPU_byteen(CPU_byteen),

  .DM_dataRead(m_data_rdata),
  .timer0_dataRead(timer0_dataRead),
  .timer1_dataRead(timer1_dataRead),

  .Bridge_dataRead(Bridge_dataRead),
  .DM_byteen(DM_byteen),
  .timer0_WE(timer0_WE),
  .timer1_WE(timer1_WE)
);

endmodule