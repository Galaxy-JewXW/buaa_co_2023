`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:09:30 11/14/2023 
// Design Name: 
// Module Name:    fromRAM 
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
module fromRAM(
    input [31:0] A,
    input [2:0] DMOp,
    input [31:0] m_data_rdata,
    output reg [31:0] RD
    );

wire byte_sign, halfword_sign;
assign byte_sign = m_data_rdata[8 * A[1:0] + 7];
assign halfword_sign = m_data_rdata[16 * A[1] + 15];

always @(*) begin
    case (DMOp)
        `DM_word:
            RD = m_data_rdata;
        `DM_halfword:
            RD = {{16{halfword_sign}}, m_data_rdata[(16 * A[1] + 15) -: 16]};
        `DM_byte:
            RD = {{24{byte_sign}}, m_data_rdata[(8 * A[1:0] + 7) -: 8]};
    endcase
end


endmodule
