`timescale 1ns / 1ps

module dm(
    input reset,
    input clk,
    input MemWrite,
    input [31:0] Addr,
    input [31:0] WD,
    input [31:0] PC,

    output [31:0] data_out
);
    reg [31:0] Memory [0:3071];
    integer i;

    initial begin
        for (i = 0; i < 3072; i = i + 1) begin
            Memory[i] <= 0;
        end
    end

    assign data_out = Memory[Addr[13:2]];

    always@(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 3072; i = i + 1) 
                Memory[i] <= 32'h0000_0000;
        end
        else begin
            if (MemWrite) begin
                $display("%d@%h: *%h <= %h", $time, PC, Addr, WD);
                Memory[Addr[13:2]] <= WD;
            end
            else
                Memory[Addr[13:2]] <= Memory[Addr[13:2]];
        end
    end

endmodule


 	/*
	//lb lw
	always @(*) begin
		if (LB) begin 
			if (b_byte == 2'b00) 
				select_data = {{24{RD[7]}}, {RD[7:0]}};
			if (b_byte == 2'b01) 
				select_data = {{24{RD[15]}}, {RD[15:8]}};
			if (b_byte == 2'b10)
				select_data = {{24{RD[23]}}, {RD[23:16]}};
			if (b_byte == 2'b11)
				select_data = {{24{RD[31]}}, {RD[31:24]}};
		end
		else begin
			select_data = RD;
		end
	end
	 
	 
	//sb	 
	wire [31:0] sb_data;
	assign sb_data = (b_byte == 2'b00) ? {{RD[31:8]}, {WD[7:0]}} :
					 (b_byte == 2'b01) ? {{RD[31:16]}, {WD[7:0]}, {RD[7:0]}} :
					 (b_byte == 2'b10) ? {{RD[31:24]}, {WD[7:0]}, {RD[15:0]}} :
					 {{WD[7:0]}, {RD[23:0]}};	
	//sb_end
	*/

