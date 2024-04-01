# P4 单周期CPU设计文档

## 设计概述

- 设计的处理器为32位单周期处理器
- 处理器支持的指令集为`add, sub, ori, lw, sw, beq, lui, nop，j，jal，jr，lb，sb，lh，sh`等
- `nop`为空指令，其机器码为`0x00000000`，不进行任何有效行为，如修改寄存器等
- `add, sub`按无符号加减法处理，不考虑溢出

整体架构参考了《数字设计与计算机体系结构》图7-14，同时在P3的Logisim电路设计上进行了改动。

![《数字设计与计算机体系结构》图7-14](D:\BUAA_Undergraduate\23-24autumn\CO_hw\P4\img\top.png)

![P3 Logisim电路设计概览](D:\BUAA_Undergraduate\23-24autumn\CO_hw\P4\img\overview.png)

## 模块定义

### 宏定义

```verilog
// Control signals of GRF are defined here.
`define A3Sel_rt 2'b00
`define A3Sel_rd 2'b01
`define A3Sel_ra 2'b10

`define WDSel_aluans 2'b00
`define WDSel_dmrd 2'b01
`define WDSel_PCa4 2'b10


// Control signals of IFU are defined here.
`define PCSel_PCa4 2'b00
`define PCSel_branch 2'b01
`define PCSel_j 2'b10
`define PCSel_jr 2'b11


// Control signals of ALU are defined here.
`define ALU_add 3'b000
`define ALU_sub 3'b001
`define ALU_or 3'b010
`define ALU_lui 3'b011

`define ALUBSel_grf 1'b0
`define ALUBSel_imm 1'b1


// Control signal of EXT are defined here.
`define EXT_zero 1'b0
`define EXT_signed 1'b1


// Control signal of DM are defined here.
`define DM_word 2'b00
`define DM_halfword 2'b01
`define DM_byte 2'b10
```

### IFU

内部包括 PC（程序计数器）、IM（指令存储器）及相关逻辑。

PC 用寄存器实现，应具有**同步复位**功能，复位值为起始地址。

**起始地址：0x00003000。**

地址范围：0x00003000 ~ 0x00006FFF。

IM用ROM实现，容量为4096 × 32bit。

IM实际地址宽度仅为12位，需要使用恰当的方法将PC中储存的地址同IM联系起来。

> PC的处理方法：
>
> - PC的变化范围为0x00003000 ~ 0x00006FFF，考虑使用PC<sup>‘</sup> = PC - 0x00003000，则PC<sup>‘</sup>的范围为0x00000000-0x00003FFF，不仅保证PC和PC<sup>‘</sup>在数值上一一对应，而且在设计处理时更加方便。
> - 注意，输出是需要输出PC的值，而不是PC<sup>‘</sup>。
> - IM的实际地址宽度为12位，而PC的有效位数（可能发生变化的位数）为低14位。因为ROM是按字寻址，在从IM读取指令时只需要用PC[13:2]作为地址，就可以正确读取数据。

#### 端口定义

| 信号名       | 方向 | 描述                                              |
| ------------ | ---- | ------------------------------------------------- |
| clk          | I    | 时钟信号                                          |
| reset        | I    | **同步**复位信号，高电平有效，将PC置为0x0000_3000 |
| PCSel[2:0]   | I    | 指定更新PC的方式                                  |
| offset[15:0] | I    | beq等branch指令的偏移量，即Instr[15:0]            |
| imm[25:0]    | I    | j指令和jal指令中的立即数，即Instr[25:0]           |
| jr_reg[31:0] | I    | jr指令中指定寄存器所储存的数                      |
| PC[31:0]     | O    | 输出当前PC的值                                    |
| PCa4[31:0]   | O    | 输出当前PC加上0x0000_0004的值                     |
| Instr[31:0]  | O    | 输出IM中PC地址上的指令                            |

#### 功能定义

| 序号 | 功能       | 描述                                              |
| ---- | ---------- | ------------------------------------------------- |
| 1    | 同步复位   | reset置1，且时钟上升沿来临时，将PC置为0x0000_3000 |
| 2    | 更新PC的值 | 时钟上升沿来临时，根据**PCSel**的值更新PC的值     |

#### 控制信号

| PCSel        | 操作                                                         |
| ------------ | ------------------------------------------------------------ |
| PCSel_PCa4   | PC <- PC + 4                                                 |
| PCSel_branch | PC <- PC + 4 + sign_extend(offset\|\|0<sup>2</sup>>)         |
| PCSel_j      | PC <- PC[31:28] \|\| imm \|\| 0<sup>2</sup>                  |
| PCSel_jr     | PC <- PC[31:28] \|\| imm \|\| 0<sup>2</sup><br>GPR[31] <- PC + 4 |

### GRF

使用**具有写使能功能**的寄存器实现，寄存器总数为**32个**，具有**异步复位**功能。

其中，**0号寄存器**($zero)的值始终保持为0。其他的寄存器**初始值(复位后)均为0**，无需专门设置。

#### 端口定义

| 信号名    | 方向 | 描述                                                         |
| --------- | ---- | ------------------------------------------------------------ |
| clk       | I    | 时钟信号                                                     |
| reset     | I    | **同步**复位信号，高电平有效                                 |
| WE        | I    | 写使能信号，高电平有效                                       |
| A1[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD1 |
| A2[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD2 |
| A3[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个将WD中的数据写入      |
| WD[31:0]  | I    | 32为数据输入信号                                             |
| WPC[31:0] | I    | 写入寄存器时对应的指令PC值                                   |
| RD1[31:0] | O    | 输出A1指定的寄存器中的32位数据                               |
| RD2[31:0] | O    | 输出A2指定的寄存器中的32位数据                               |

#### 功能定义

| 序号 | 功能   | 描述                                                   |
| ---- | ------ | ------------------------------------------------------ |
| 1    | 复位   | reset置1，且时钟上升沿来临时，所有寄存器存储的数值清零 |
| 2    | 读数据 | 读出A1，A2地址对应寄存器中所存储的数据到对应的RD1，RD2 |
| 3    | 写数据 | 当WE有效且时钟上升沿来临时，将WD写入A3所对应的寄存器中 |

#### 控制信号

| A3Sel    | 操作                      |
| -------- | ------------------------- |
| A3Sel_rt | A3来自rt字段，对应I型指令 |
| A3Sel_rd | A3来自rd字段，对应I型指令 |
| A3Sel_ra | A3为$ra，对应jal指令      |

| WDSel        | 操作                |
| ------------ | ------------------- |
| WDSel_aluans | WD来自ALU的运算结果 |
| WDSel_dmrd   | WD来自DM的输出RD    |
| WDSel_PCa4   | WD为PC + 4          |

### ALU

提供 32 位加、减、或运算及大小比较功能。

加减法按无符号处理（不考虑溢出）。

#### 端口定义

| 信号名       | 方向 | 描述                   |
| ------------ | ---- | ---------------------- |
| A[31:0]      | I    | 32位运算数             |
| B[31:0]      | I    | 32位运算数             |
| ALUOp[2:0]   | I    | 指定ALU进行的计算      |
| zero         | O    | 输出A - B的结果是否为0 |
| result[31:0] | O    | 32位运算结果           |

#### 功能定义

| 序号 | 功能 | 描述                              |
| ---- | ---- | --------------------------------- |
| 1    | 运算 | 根据ALUOp指定的操作对A和B进行运算 |

#### 控制信号

| ALUOp   | 操作                          |
| ------- | ----------------------------- |
| ALU_add | result = A + B，不考虑溢出    |
| ALU_sub | result = A + B，不考虑溢出    |
| ALU_or  | result = A \| B               |
| ALU_lui | result = B \| 10<sup>16</sup> |

| ALUBSel     | 操作                        |
| ----------- | --------------------------- |
| ALUBSel_grf | ALU的第二个运算数来自GRF    |
| ALUBSel_imm | ALU的第二个运算数来自立即数 |

### DM

使用RAM实现，容量为3072 × 32bit，应具有**同步复位**功能，复位值为0x00000000。

**起始地址：0x00000000**。

地址范围：0x00000000 ~ 0x00002FFF。

#### 端口定义

| 信号名    | 方向 | 描述                         |
| --------- | ---- | ---------------------------- |
| clk       | I    | 时钟信号                     |
| reset     | I    | **同步**复位信号，高电平有效 |
| A[31:0]   | I    | 需要进行读/写操作的地址      |
| WD[31:0]  | I    | 32位写入RAM的数据            |
| WE        | I    | 写使能信号，高电平有效       |
| DMOp[1:0] | I    | 指定DM进行的读/写操作方式    |
| WPC[31:0] | I    | 写入DM时对应的指令PC值       |
| RD[31:0]  | O    | 32位从RAM读出的输出数据      |

#### 功能定义

| 序号 | 功能   | 描述                                                         |
| ---- | ------ | ------------------------------------------------------------ |
| 1    | 复位   | reset置1，且时钟上升沿来临时，重置RAM内存为0                 |
| 2    | 写数据 | 当WE有效且时钟上升沿到来时，将WD中的数据写入A对应的RAM地址中 |
| 3    | 读数据 | 读取A对应的RAM地址中存储的数据到RD                           |

#### 控制信号

| DMOp        | 操作                          |
| ----------- | ----------------------------- |
| DM_word     | 读/写整个字，对应lw和sw指令   |
| DM_halfword | 读/写半个字，对应lh和sh指令   |
| DM_byte     | 读/写一个字节，对应lb和sb指令 |

### EXT

#### 端口定义

| 信号名       | 方向 | 描述                 |
| ------------ | ---- | -------------------- |
| num[15:0]    | I    | 16位需要扩展的立即数 |
| EXTOp        | I    | 指定进行扩展的方式   |
| result[31:0] | O    | 32位完成扩展的立即数 |

#### 功能定义

| 序号 | 功能 | 描述                                  |
| ---- | ---- | ------------------------------------- |
| 1    | 扩展 | 根据EXTOp指定的操作，对立即数进行扩展 |

#### 控制信号

| EXTOp      | 操作                      |
| ---------- | ------------------------- |
| EXT_zero   | result = zero_extend(num) |
| EXT_signed | result = sign_extend(num) |

### Controller

使用与或门阵列构造控制信号。

和逻辑的功能是**识别**，将输入的机器码识别为相应的指令；或逻辑的功能是**生成**，根据输入的指令的不同，产生不同的控制信号。

#### 端口定义

| 信号名       | 方向 | 描述                                  |
| ------------ | ---- | ------------------------------------- |
| opcode       | I    | 32位指令Instr[31:26]                  |
| funct        | I    | 32位指令Instr[5:0]                    |
| ALUflag_zero | I    | ALU中两运算数相减是否为0，对应beq指令 |
| A3Sel        | O    | 指定数据将写入GRF的寄存器序号，即A3   |
| ALUOp        | O    | 指定ALU进行的运算操作                 |
| ALUBSel      | O    | 指定ALU第二个操作数是否为立即数       |
| WDSel        | O    | 指定写入GRF的数据的来源               |
| RegWrite     | O    | 是否可向GRF中写入数据                 |
| MemWrite     | O    | 是否可向DM中写入数据                  |
| PCSel        | O    | 指定更新PC的方式                      |
| EXTOp        | O    | 指定EXT进行立即数扩展的方式           |
| DMOp         | O    | 指定DM操作的方式                      |

#### 功能定义

| 序号 | 功能         | 描述         |
| ---- | ------------ | ------------ |
| 1    | 生成控制信号 | 生成控制信号 |

## 重要机制实现方法

### 生成控制信号

|      | opcode |     funct     |  A3Sel   |  ALUOp  |   ALUBSel   |    WDSel     | RegWrite | MemWrite |    PCSel     | EXTOp |    DMOp     |
| :--: | :----: | :-----------: | :------: | :-----: | :---------: | :----------: | :------: | :------: | :----------: | :---: | :---------: |
| add  | 000000 |    100000     | A3Sel_rd | ALU_add | ALUBSel_grf | WDSel_aluans |    1     |          |              |       |             |
| sub  | 000000 |    100010     | A3Sel_rd | ALU_sub | ALUBSel_grf | WDSel_aluans |    1     |          |              |       |             |
| ori  | 001101 | **undefined** | A3Sel_rt | ALU_or  | ALUBSel_imm | WDSel_aluans |    1     |          |              |       |             |
|  lw  | 100011 | **undefined** | A3Sel_rt | ALU_add | ALUBSel_imm |  WDSel_dmrd  |    1     |          |              |   1   |   DM_word   |
|  sw  | 101011 | **undefined** |          | ALU_add | ALUBSel_imm |              |          |    1     |              |   1   |   DM_word   |
| beq  | 000100 | **undefined** |          | ALU_sub | ALUBSel_grf |              |          |          | PCSel_branch |       |             |
| lui  | 001111 | **undefined** | A3Sel_rt | ALU_lui | ALUBSel_imm | WDSel_aluans |    1     |          |              |       |             |
|  j   | 000010 | **undefined** |          |         |             |              |          |          |   PCSel_j    |       |             |
| jal  | 000011 | **undefined** | A3Sel_ra |         |             |  WDSel_PCa4  |    1     |          |   PCSel_j    |       |             |
|  jr  | 001000 |    001000     |          |         |             |              |          |          |   PCSel_jr   |       |             |
|  lb  | 100000 | **undefined** | A3Sel_rt | ALU_add | ALUBSel_imm |  WDSel_dmrd  |    1     |          |              |   1   |   DM_byte   |
|  sb  | 101000 | **undefined** |          | ALU_add | ALUBSel_imm |              |          |    1     |              |   1   |   DM_byte   |
|  lh  | 100001 | **undefined** | A3Sel_rt | ALU_add | ALUBSel_imm |  WDSel_dmrd  |    1     |          |              |   1   | DM_halfword |
|  sh  | 101001 | **undefined** |          | ALU_add | ALUBSel_imm |              |          |    1     |              |   1   | DM_halfword |

> 1. PCSel一列缺省值为PCSel_PCa4
>
>    当beq和ALUflag_zero同时为高电平时，PCSel为PCSel_branch

controller的verilog代码如下。

```verilog
`timescale 1ns / 1ps
`include "def.v"

module controller(
    input [5:0] opcode,
    input [5:0] funct,
    input ALUflag_zero,
    output [1:0] A3Sel,
    output [2:0] ALUOp,
    output ALUBSel,
    output [1:0] WDSel,
    output RegWrite,
    output MemWrite,
    output [1:0] PCSel,
    output EXTOp,
    output [1:0] DMOp
    );


// parameter of funct, for R-type instructions.
parameter ADD  = 6'b100000,
          SUB  = 6'b100010,
          JR   = 6'b001000,
          ZERO = 6'b000000;

// parameter of opcode, for I-type and J-type instructions.
// I-Type
parameter ORI  = 6'b001101,
          LW  = 6'b100011,
          SW  = 6'b101011,
          BEQ = 6'b000100,
          LUI = 6'b001111,
          JAL = 6'b000011,
          LB  = 6'b100000,
          SB  = 6'b101000,
          LH  = 6'b100001,
          SH  = 6'b101001;

// J-Type
parameter J = 6'b000010;


// identify instruction
wire zero, add, sub, ori, lw, sw, beq, lui, jal, jr, j;
wire lb, sb, lh, sh;

// R
assign zero = (opcode == ZERO);
assign add = (zero && (funct == ADD));
assign sub = (zero && (funct == SUB));
assign jr = (zero && (funct == JR));

// I and J
assign ori = (opcode == ORI);
assign lw = (opcode == LW);
assign sw = (opcode == SW);
assign beq = (opcode == BEQ);
assign lui = (opcode == LUI);
assign jal = (opcode == JAL);
assign j = (opcode == J);
assign lb = (opcode == LB);
assign sb = (opcode == SB);
assign lh = (opcode == LH);
assign sh = (opcode == SH);


assign A3Sel = (ori || lw || lui || lb || lh) ? `A3Sel_rt :
               (add || sub) ? `A3Sel_rd : 
               jal ? `A3Sel_ra : 2'b00;

assign ALUOp = (lw || sw || add || lh || sh || lb || sb) ? `ALU_add :
               (sub || beq) ? `ALU_sub :
               ori ? `ALU_or :
               lui ? `ALU_lui : 3'b000;

assign ALUBSel = (lw || sw || lui || ori || lb || sb || lh || sh);

assign WDSel = (add || sub || ori || lui) ? `WDSel_aluans :
               (lw || lb || lh) ? `WDSel_dmrd :
               (jal) ? `WDSel_PCa4 : 2'b00;

assign RegWrite = (add || sub || ori || lui || jal || lw || lh || lb);

assign MemWrite = (sw || sb || sh);

assign PCSel = (beq && ALUflag_zero) ? `PCSel_branch :
               (jal || j) ? `PCSel_j :
               (jr) ? `PCSel_jr : `PCSel_PCa4;

assign EXTOp = (lw || sw || lb || sb || lh || sh);

assign DMOp = (lw || sw) ? `DM_word :
              (lb || sb) ? `DM_byte :
              (lh || sh) ? `DM_halfword : 2'b00;
endmodule
```

### DM中对读写半字/字节的处理

```verilog
`timescale 1ns / 1ps
`include "def.v"

module dm(
    input clk,
    input reset,
    input [31:0] A,
    input [31:0] WD,
    input WE,
    input [1:0] DMOp,
    input [31:0] WPC,
    output [31:0] RD
    );

reg [31:0] RAM [0:3071];
integer i;
initial begin
    for (i = 0; i < 2072; i = i + 1) begin
        RAM[i] = 32'h0000_0000;
    end
end

wire [11:0] address;
assign address = A[13:2];

// write data with DMOp
wire [31:0] tempRD;
assign tempRD = RAM[address];

wire [31:0] halfword0;
wire [31:0] halfword1;
wire [31:0] byte0;
wire [31:0] byte1;
wire [31:0] byte2;
wire [31:0] byte3;
reg [31:0] datain;

assign halfword0 = {tempRD[31:16], WD[15:0]};
assign halfword1 = {WD[15:0], tempRD[15:0]};

assign byte0 = {tempRD[31:24], tempRD[23:16], tempRD[15:8], WD[7:0]};
assign byte1 = {tempRD[31:24], tempRD[23:16], WD[7:0], tempRD[7:0]};
assign byte2 = {tempRD[31:24], WD[7:0], tempRD[15:8], tempRD[7:0]};
assign byte3 = {WD[7:0], tempRD[23:16], tempRD[15:8], tempRD[7:0]};


always @(*) begin
    if (DMOp == `DM_word) begin
        datain = WD;
    end
    else if (DMOp == `DM_halfword) begin
        if (A[1] == 1'b0) begin
            datain = halfword0;
        end
        else if (A[1] == 1'b1) begin
            datain = halfword1;
        end
        else begin
            datain = WD;
        end
    end
    else if (DMOp == `DM_byte) begin
        if (A[1:0] == 2'b00) begin
            datain = byte0;
        end
        else if (A[1:0] == 2'b01) begin
            datain = byte1;
        end
        else if (A[1:0] == 2'b10) begin
            datain = byte2;
        end
        else if (A[1:0] == 2'b11) begin
            datain = byte3;
        end
        else begin
            datain = WD;
        end
    end
    else begin
        datain = WD;
    end
end

always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < 2072; i = i + 1) begin
            RAM[i] <= 32'h0000_0000;
        end
    end
    else begin
        if (WE) begin
            RAM[address] <= datain;
            $display("@%h: *%h <= %h", WPC, A, datain);
        end
        else begin
            RAM[address] <= RAM[address];
        end
    end
end


// read data with DMOp
reg [31:0] dataout;
assign RD = dataout;

always @(*) begin
    if (DMOp == `DM_word) begin
        dataout = tempRD;
    end
    else if (DMOp == `DM_halfword) begin
        if (A[1] == 1'b0) begin
            dataout = {{16{tempRD[15]}}, tempRD[15:0]};
        end
        else if (A[1] == 1'b1) begin
            dataout = {{16{tempRD[31]}}, tempRD[31:16]};
        end
        else begin
            dataout = tempRD;
        end
    end
    else if (DMOp == `DM_byte) begin
        if (A[1:0] == 2'b00) begin
            dataout = {{24{tempRD[7]}}, tempRD[7:0]};
        end
        else if (A[1:0] == 2'b01) begin
            dataout = {{24{tempRD[15]}}, tempRD[15:8]};
        end
        else if (A[1:0] == 2'b10) begin
            dataout = {{24{tempRD[23]}}, tempRD[23:16]};
        end
        else if (A[1:0] == 2'b11) begin
            dataout = {{24{tempRD[31]}}, tempRD[31:24]};
        end
        else begin
            dataout = tempRD;
        end
    end
    else begin
        dataout = tempRD;
    end
end

endmodule
```

## 测试方案

### 测试代码1

```mipsasm
ori $t0,$0,156
ori $t2,$0,135
ori $a3,$a3,1035
lui $a1,101
ori $a1,$0,2211
nop
loop:
beq $t3,$t2,end
ori $t4,8
lui $s6,170
add $t3,$t3,$t4
add $t3,$t2,$0
lw $s0,4($t1)
out:
add $t2,$t2,$t1
sub $t3,$t2,$0
beq $t3,$t2,loop
end:
lui $v0,11111
```

### 测试代码2

```
ori $t0, $0, 1
ori $s0, $0, 4
ori $s1, $0, 1
ori $s2, $0, 8
lui $s3, 123

l1:
	beq $t0, $s0, l1e
	add $t0, $t0, $t0
	j   l1

l1e:
	jal sum
	ori $t0, $0, 1
	j   l2
	
sum:
	add $a1, $0, $s0
	add $a2, $0, $s2
	sub $v0, $a1, $a2
	jr  $ra

l2:
	ori $v0, $0, 10
```

### 测试代码3

```
lui $s0, 0xf123
ori $s0, $s0, 0x3f21
lui $s1, 0x4567
ori $s1, $s1, 0x7465
lui $s2, 0x89ab
ori $s2, $s2, 0xb89a
lui $s3, 0xcdef
ori $s3, $s3, 0xcfed

ori $t0, $0, 4
sw $s0, 0($0)
sw $s1, 0($t0)
sw $s2, 4($t0)

add $t0, $t0, $t0
lw $t9, 0($t0)
lw $t8, -4($t0)

ori $t0, $0, 20
sw $s3, -8($t0)

ori $t0, $0, 19
sh $s1, -1($t0)
sh $s2, 1($t0)

ori $t0, $0, 25
sb $s3, -1($t0)
sb $s1, 0($t0)
sb $s2, 1($t0)
sb $s0, 2($t0)

ori $t0, $0, 2
lb $t1, -2($t0)
lb $t3, -1($t0)
lb $t1, 0($t0)
lb $t2, 1($t0)

ori $t0, $0, 19
lh $t2, -1($t0)
lh $t5, 1($t0)
```

## 思考题

1. 根据你的理解，在下面给出的DM的输入示例中，地址信号addr位数为什么是[11:2]而不是[9:0]？这个addr信号又是从哪里来的？

![P4Q](D:\BUAA_Undergraduate\23-24autumn\CO_hw\P4\img\P4Q.png)

DM里的RAM按字节寻址，且该DM设计大小为4KB，所以应该使用addr[11:2]

addr来自ALU的计算输出，代表要读取的数据在RAM中的地址

2. 思考上述两种控制器设计的译码方式，给出代码示例，并尝试对比各方式的优劣。

   控制器设计的译码方式有三种。

   - 三元运算符

     ```verilog
     assign ALUOp = (lw || sw || add || lh || sh || lb || sb) ? `ALU_add :
                    (sub || beq) ? `ALU_sub :
                    ori ? `ALU_or :
                    lui ? `ALU_lui : 3'b000;
     ```

   - case语句

     ```verilog
     case(ALUOp)
     	`ALU_add: C = A + B;
     	`ALU_sub: C = A - B;
     	`ALU_or: C = A | B;
     	`ALU_lui: C = B << 16;
     	default: C = 32'h0000_0000;
     endcase
     ```

   - if-else语句

     ```verilog
     if (ALUOP == `ALU_add)
     	C = A + B;
     else if (ALUOP == `ALU_sub)
     	C = A - B;
     else
     	C = 32'h0000_0000;
     ```

assign语句配合三目运算符使用，可以不用再额外定义reg变量。

case语句，if-else语句配合宏定义使用可以增强代码的可读性。if-else语句写起来略显繁琐。

3. 在相应的部件中，复位信号的设计都是**同步复位**，这与 P3 中的设计要求不同。请对比**同步复位**与**异步复位**这两种方式的 reset 信号与 clk 信号优先级的关系。

   同步复位中，clk的优先级高于reset；异步复位中两者优先级相同。

4. C 语言是一种弱类型程序设计语言。C 语言中不对计算结果溢出进行处理，这意味着 C 语言要求程序员必须很清楚计算结果是否会导致溢出。因此，如果仅仅支持 C 语言，MIPS 指令的所有计算指令均可以忽略溢出。 请说明为什么在忽略溢出的前提下，addi 与 addiu 是等价的，add 与 addu 是等价的。提示：阅读《MIPS32® Architecture For Programmers Volume II: The MIPS32® Instruction Set》中相关指令的 Operation 部分。

   addi与addiu的区别在于当出现溢出时，addiu忽略溢出，并将溢出的最高位舍弃；addi会报错SignalException(IntegerOverflow)。忽略溢出时，二者等价。