`timescale 1ns / 1ps

`define lh_extOp 2'b01
`define lb_extOp 2'b10

module load_ext(
    input [31:0] DataIn,
    input [1:0] Load_extOp,
    input [1:0] byte,
    output reg [31:0] DataOut
);
    always@(*)begin
        if (Load_extOp == `lh_extOp) begin
            if (byte[1] == 1'b0) begin
				DataOut = {{16{DataIn[15]}}, {DataIn[15:0]}};
            end
			else if (byte[1] == 1'b1) begin
				DataOut = {{16{DataIn[31]}}, {DataIn[31:16]}};
            end
        end
        else if (Load_extOp == `lb_extOp) begin 
			if (byte == 2'b00) 
				DataOut = {{24{DataIn[7]}}, {DataIn[7:0]}};
			else if (byte == 2'b01) 
				DataOut = {{24{DataIn[15]}}, {DataIn[15:8]}};
			else if (byte == 2'b10)
				DataOut = {{24{DataIn[23]}}, {DataIn[23:16]}};
			else if (byte == 2'b11)
				DataOut = {{24{DataIn[31]}}, {DataIn[31:24]}};
        end 
        else begin
            DataOut = DataIn;
        end
	end

endmodule