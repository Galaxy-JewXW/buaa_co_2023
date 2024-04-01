`timescale 1ns / 1ps

module cmp(
    input [31:0] R1,
    input [31:0] R2,

    output Beq_cmp,
    output Bne_cmp,
	output Bcd_cmp
);
    assign Beq_cmp = (R1 == R2);
    assign Bne_cmp = ~(R1 == R2);
	assign Bcd_cmp = (R1 == R2);

endmodule