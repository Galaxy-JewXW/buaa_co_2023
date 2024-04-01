`timescale 1ns / 1ps

module ifu(
    input clk,
    input reset,
	input [31:0] npc,
    input WE,
    output [31:0] PC
);

    reg [31:0] pc = 32'h0000_3000;
    wire [11:0] Addr;
	integer i;

	wire [31:0] pc_sub3;
	assign pc_sub3 = pc - 32'h0000_3000;

    assign Addr = pc_sub3[13:2];
    assign PC = pc;

    always @(posedge clk) begin
        if (reset) begin
            pc <= 32'h0000_3000;
        end
        else begin
			if(WE) begin
                pc <= npc;
			end else
				pc <= pc;
		end
    end

endmodule











