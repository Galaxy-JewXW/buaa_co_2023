`timescale 1ns / 1ps
`include "def.v"

module D_CMP(
    input [2:0] CMPOp,
    input [31:0] rs,
    input [31:0] rt,
    output jump
    );

    wire equal = (rs == rt);
    wire nequal = !equal;
    wire less0 = $signed(rs) < 0;
    wire greater0 = (rs > 0);
    wire nequal0 = (rs != 0);
    wire equal0 = (rs == 0);

    assign jump = (CMPOp == `CMP_beq && equal) ? 1 :
                  (CMPOp == `CMP_bltzal && less0) ? 1 :
                  0;

endmodule
