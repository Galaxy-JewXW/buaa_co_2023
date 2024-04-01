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
    input load,
    input M_EXC_DMOv,
    output reg [31:0] RD,
    output M_EXC_AdEL
    );

wire byte_sign, halfword_sign;
assign byte_sign = m_data_rdata[8 * A[1:0] + 7];
assign halfword_sign = m_data_rdata[16 * A[1] + 15];

wire align;
wire outofrange;
wire timer;

assign align = (DMOp == `DM_word && (|A[1:0])) || (DMOp == `DM_halfword && (A[0]));
assign outofrange = !((A >= `DMa && A <= `DMb) || (A >= `TC1a && A <= `TC1b) || (A >= `TC2a && A <= `TC2b) || 
                    (A >= 32'h0000_7f20 && A <= 32'h0000_7f23));
assign timer = (DMOp != `DM_word && ((A >= `TC1a && A <= `TC1b) || (A >= `TC2a && A <= `TC2b)));

assign M_EXC_AdEL = (load) && (align || outofrange || timer || M_EXC_DMOv);

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
