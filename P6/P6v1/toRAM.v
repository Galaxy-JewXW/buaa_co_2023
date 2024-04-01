`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:04 11/14/2023 
// Design Name: 
// Module Name:    toRAM 
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
module toRAM(
    input [31:0] A,
    input [31:0] gpr_rt,
    input [2:0] DMOp,
    input MemWrite,
    output reg [3:0] m_data_byteen,
    output reg [31:0] m_data_wdata
    );

always @(*) begin
    if (MemWrite) begin
        case (DMOp)
            `DM_word:
                m_data_byteen = 4'b1111;
            `DM_halfword: begin
                m_data_byteen = (A[1] == 1'b0) ? 4'b0011 : 4'b1100;
            end
            `DM_byte: begin
                case (A[1:0])
                    2'b00:
                        m_data_byteen = 4'b0001;
                    2'b01:
                        m_data_byteen = 4'b0010;
                    2'b10:
                        m_data_byteen = 4'b0100;
                    2'b11:
                        m_data_byteen = 4'b1000;
                endcase
            end
        endcase
    end
    else
        m_data_byteen = 4'b0000;
end

always @(*) begin
    if (MemWrite) begin
        case (DMOp)
            `DM_word:
                m_data_wdata = gpr_rt;
            `DM_halfword:
                m_data_wdata = (A[1] == 1'b0) ? {16'b0, gpr_rt[15:0]} :
                                {gpr_rt[15:0], 16'b0};
            `DM_byte: begin
                case (A[1:0])
                    2'b00:
                        m_data_wdata = {24'b0, gpr_rt[7:0]};
                    2'b01:
                        m_data_wdata = {16'b0, gpr_rt[7:0], 8'b0};
                    2'b10:
                        m_data_wdata = {8'b0, gpr_rt[7:0], 16'b0};
                    2'b11:
                        m_data_wdata = {gpr_rt[7:0], 24'b0};
                endcase
            end
        endcase
    end
    else
        m_data_wdata = 32'b0;
end


endmodule
