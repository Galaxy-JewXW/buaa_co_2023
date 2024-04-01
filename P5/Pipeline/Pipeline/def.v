
`define WDSel_alures    2'b00
`define WDSel_dmrd      2'b01
`define WDSel_pc8       2'b10

`define A3Sel_rd    2'b00
`define A3Sel_rt    2'b01
`define A3Sel_ra    2'b10
`define A3Sel_none  2'b11

`define BSel_rt     2'b00
`define BSel_imm    2'b01
`define BSel_rs     2'b10
`define BSel_shamt  2'b11

`define ASel_rt   2'b00
`define ASel_rs   2'b01

`define ALU_add     4'b0000
`define ALU_sub     4'b0001
`define ALU_or      4'b0010
`define ALU_slt     4'b0011
`define ALU_lui     4'b0101

`define DM_w    3'b000
`define DM_h    3'b001
`define DM_hu   3'b010
`define DM_b    3'b011
`define DM_bu   3'b100 

`define EXT_sign    1'b1
`define EXT_unsign  1'b0

`define CMP_beq     3'b000
`define CMP_bltzal  3'b001

`define NPC_pc4     3'b000
`define NPC_j_jal   3'b001
`define NPC_jr_jalr 3'b010
`define NPC_b       3'b011

`define op_R 		6'b000000
`define fun_ADD		6'b100000
`define fun_SUB		6'b100010

`define fun_AND		6'b100100
`define fun_OR		6'b100101
`define fun_XOR		6'b100110
`define fun_NOR		6'b100111

`define fun_SLT		6'b101010
`define fun_SLTU	6'b101011

`define fun_SLL		6'b000000
`define fun_SRL		6'b000010
`define fun_SRA		6'b000011
`define fun_SLLV	6'b000100
`define fun_SRLV	6'b000110
`define fun_SRAV	6'b000111

`define op_ORI      6'b001101
`define op_LUI      6'b001111
`define op_ADDI	    6'b001000
`define op_ADDIU	6'b001001
`define op_ANDI	    6'b001100
`define op_XORI	    6'b001110

`define op_SLTI	    6'b001010
`define op_SLTIU	6'b001011

`define op_J        6'b000010
`define op_JAL      6'b000011

`define op_JR       6'b000000
`define fun_JR      6'b001000

`define op_JALR     6'b000000
`define fun_JALR    6'b001001

`define op_BEQ		6'b000100	
`define op_BNE		6'b000101
`define op_BLEZ	    6'b000110
`define op_BGTZ	    6'b000111
`define op_BLTZ	    6'b000001
`define op_BGEZ	    6'b000001

`define op_LB       6'b100000
`define op_SB       6'b101000
`define op_LH       6'b100001
`define op_SH       6'b101001
`define op_LW       6'b100011
`define op_SW       6'b101011
`define op_LBU      6'b100100
`define op_LHU      6'b100101
