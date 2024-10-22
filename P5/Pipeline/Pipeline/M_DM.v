`timescale 1ns / 1ps
`include "def.v"

`define word                mem[Addr >> 2][31:0]
`define half_word           mem[Addr >> 2][(16*Addr[1] + 15) -: 16]
`define byte                mem[Addr >> 2][(8*Addr[1:0] + 7) -: 8]
`define half_word_sign      mem[Addr >> 2][16*Addr[1] + 15]
`define byte_sign           mem[Addr >> 2][8*Addr[1:0] + 7]

module M_DM(
    input clk,
    input reset,
    input [31:0] PC,

    input [31:0] Addr,
    input [31:0] WD,
    input [2:0] DMOp,
    input DMEn,
    
    output [31:0] RD
    );

    reg[31:0] mem[3071:0];
    integer i;
	 wire [1:0] con = Addr[1:0];
    initial begin
        for(i=0; i<3072; i=i+1) mem[i] <= 32'd0;
    end

    always @(posedge clk) begin
        if(reset) begin
            for(i=0; i<3072; i=i+1) mem[i] <= 32'd0;
        end else if(DMEn) begin
            case(DMOp)
                `DM_b: begin
						  `byte <= WD[7:0];
                    case(Addr[1:0])
                        2'b00: $display("%d@%h: *%h <= %h", $time, PC, Addr, {mem[Addr >> 2][31:8], WD[7:0]});
                        2'b01: $display("%d@%h: *%h <= %h", $time, PC, Addr, {mem[Addr >> 2][31:16], WD[7:0], mem[Addr >> 2][7:0]});
                        2'b10: $display("%d@%h: *%h <= %h", $time, PC, Addr, {mem[Addr >> 2][31:24], WD[7:0], mem[Addr >> 2][15:0]});
                        2'b11: $display("%d@%h: *%h <= %h", $time, PC, Addr, {WD[7:0], mem[Addr >> 2][23:0]});
                    endcase
                end
                `DM_h: begin
                    `half_word <= WD[15:0];
                    case(Addr[1])
                        1'b0: $display("%d@%h: *%h <= %h", $time, PC, Addr, {mem[Addr >> 2][31:16], WD[15:0]});
                        1'b1: $display("%d@%h: *%h <= %h", $time, PC, Addr, {WD[15:0], mem[Addr >> 2][15:0]});
                    endcase
                end
                `DM_w: begin
                    `word <= WD;
                    $display("%d@%h: *%h <= %h", $time, PC, Addr, WD);
                end
            endcase
        end
    end

    assign RD = (DMOp == `DM_b) ? {{24{`byte_sign}}, `byte} :
                (DMOp == `DM_bu) ? {{24{1'b0}}, `byte} :
                (DMOp == `DM_h) ? {{16{`half_word_sign}}, `half_word} :
                (DMOp == `DM_hu) ? {{16{1'b0}}, `half_word} :
                `word;
endmodule
