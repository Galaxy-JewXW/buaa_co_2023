`timescale 1ns / 1ps
`include "def.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:44 10/31/2023 
// Design Name: 
// Module Name:    ifu 
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
module ifu(
    input clk,
    input reset,
    input [1:0] PCSel,
    input [15:0] offset,
    input [25:0] imm,
    input [31:0] jr_reg,
    output [31:0] PC,
    output [31:0] PCa4,
    output [31:0] Instr
    );

reg [31:0] ROM [0:4095];
reg [31:0] pc;
integer i;

// import test code into ROM file.
initial begin
    pc <= 32'h0000_0000;
    // for (i = 0; i < 4096; i = i + 1) begin
    //     ROM[i] <= 32'h0000_0000;
    // end
    $readmemh("code.txt", ROM);
    // for (i = 0; i < 4096; i = i + 1) begin
    //     $display("%d: %h", i, ROM[i]);
    // end
end

// output the current value of PC and PC + 4.
assign PC = pc + 32'h0000_3000;
assign PCa4 = PC + 32'h0000_0004;
// branch_offset = signed_extend(offset || 0^2)
wire [31:0] branch_offset;
assign branch_offset = {{14{offset[15]}}, offset, {2{1'b0}}};

// jump_imm = pc[31:28] || imm || 0^2
wire [31:0] jump_imm;
assign jump_imm = {pc[31:28], imm, {2{1'b0}}};

// address = pc[13:2]
wire [11:0] address = pc[13:2];
assign Instr = ROM[address];

// set the value of nextPC on posedge of clk.
always @(posedge clk) begin
    if (reset) begin
        pc <= 32'h0000_0000;
    end
    else begin
        case (PCSel)
            `PCSel_PCa4: begin
                pc <= pc + 32'h0000_0004;
            end
            `PCSel_branch: begin
                pc <= pc + 32'h0000_0004 + branch_offset;
            end
            `PCSel_j: begin
                pc <= jump_imm - 32'h0000_3000;
            end
            `PCSel_jr: begin
                pc <= jr_reg - 32'h0000_3000;
            end
            default: begin
                pc <= pc;
            end
        endcase
    end
end


endmodule
