# P5 流水线CPU设计文档

## 设计概述

- 设计的处理器为32位五级流水线处理器
- 处理器支持的指令集为`add, sub, ori, lw, sw, beq, lui, addi, nop，j，jal，jr，lb，sb，lh，sh`等
- `add, sub`按无符号加减法处理，不考虑溢出

整体架构参考了《数字设计与计算机体系结构》图7-58。

![整体架构](https://pic.imgdb.cn/item/654cc27dc458853aef789452.png)

## F级：取指令（Fetch）

本级的输入为来自D级的`next_pc`，用于更新下一个PC的值。

本级的输出为`F_PC`和`F_Instr`，分别对应从F级指令的PC和F级指令的内容，均需要参与流水。

### F_IFU

| 信号名        | 方向 | 描述                         |
| ------------- | ---- | ---------------------------- |
| clk           | I    | 时钟信号                     |
| reset         | I    | **同步**复位信号，高电平有效 |
| enable        | I    | PC写使能信号，高电平有效     |
| next_pc[31:0] | I    | 待更新的指令地址             |
| pc[31:0]      | O    | 当前指令地址                 |
| instr[31:0]   | O    | 当前PC对应的32位指令         |

### F/D级流水线寄存器

| 信号名        | 方向 | 功能描述                                   |
| ------------- | ---- | ------------------------------------------ |
| clk           | I    | 时钟信号                                   |
| reset         | I    | **同步**复位信号，高电平有效               |
| flush         | I    | 寄存器刷新信号，高电平有效，发生阻塞时使用 |
| enable        | I    | 写使能信号，高电平有效                     |
| F_pc[31:0]    | I    | F级PC                                      |
| F_instr[31:0] | I    | 时钟信号                                   |
| D_pc[31:0]    | O    | D级PC                                      |
| D_instr[31:0] | O    | 32位的指令值                               |

## D级：译码（Decode）

本级的输入为来自F级的`F_PC`和`F_Instr`。

本级的输出为`D_gpr_rs`, `D_gpr_rt`, `D_extres`, `D_PC`, `D_Instr`和`next_pc`。

本级涉及到来自E级、M级、W级的转发，其中来自W级的转发通过**GRF内部转发**的方式实现。

`$rs`和`$rt`的值在本级转发成`D_fwd_gprrs`和`D_fwd_gprrt`，和`D_extres`, `D_PC`, `D_Instr`参与流水。

本级需要对**此级指令**的$$Tuse$$和此时**E级**指令与**M级指令**的$Tnew$进行比较，从而确定是否执行阻塞。

> $Tuse$和$Tnew$:
>
> - $Tuse$表示这条指令位于D级的时候，再经过多少个时钟周期就必须要使用相应的数据。
>   - 每个指令的$Tuse$是固定不变的
>   - 一个指令可以有两个$Tuse$值
> - $Tnew$表示位于**某个流水级**的**某个指令**，它经过多少个时钟周期可以算出结果并且存储到流水级寄存器里。
>   - $Tnew$是一个动态值，每个指令处于流水线不同阶段有不同的$Tnew$值
>   - 一个指令在一个时刻至多有一个$Tnew$值（一个指令至多写一个寄存器）
>
> - 当$Tuse$ >= $Tnew$，说明需要的数据可以及时算出，可以通过**转发**来解决
>
>   当$Tuse$ < $Tnew$，说明需要的数据不能及时算出，必须**阻塞**流水线解决

### D_GRF

| 信号名    | 方向 | 描述                                                         |
| --------- | ---- | ------------------------------------------------------------ |
| clk       | I    | 时钟信号                                                     |
| reset     | I    | **同步**复位信号，高电平有效                                 |
| A1[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD1 |
| A2[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个，将其中存储的数据读出到RD2 |
| A3[4:0]   | I    | 5位地址输入信号，指定32个寄存器中的一个将WD中的数据写入      |
| WD[31:0]  | I    | 32位数据输入信号                                             |
| WPC[31:0] | I    | 写入寄存器时对应的指令PC值                                   |
| RD1[31:0] | O    | 输出A1指定的寄存器中的32位数据                               |
| RD2[31:0] | O    | 输出A2指定的寄存器中的32位数据                               |

> - 如果不需要写寄存器，只需要把A3Sel设为0即可。
> - 此处**WPC**和**WD**均来自**W级**。

#### 控制信号

| WDSel        | 操作                           |
| ------------ | ------------------------------ |
| WDSel_aluans | WD来自ALU的运算结果            |
| WDSel_dmrd   | WD来自DM的输出RD               |
| WDSel_PCa8   | WD为**当前流水线层级的PC** + 8 |

### D_NPC

| 信号名        | 方向 | 描述                                           |
| ------------- | ---- | ---------------------------------------------- |
| F_pc[31:0]    | I    | 当前F级PC的值                                  |
| D_pc[31:0]    | I    | 当前D级PC的值                                  |
| PCSel[1:0]    | I    | 指定更新PC的方式                               |
| branch        | I    | branch类型指令**是否达到跳转条件**，高电平有效 |
| imm[25:0]     | I    | j指令和jal指令中的立即数，即D_Instr[25:0]      |
| offset[15:0]  | I    | branch类型指令的偏移量，即D_Instr[15:0]        |
| ra[31:0]      | I    | **完成转发后**`$rs`寄存器保存的地址值          |
| next_pc[31:0] | O    | 下一指令的PC                                   |

#### 控制信号

| PCSel        | 操作                                                 |
| ------------ | ---------------------------------------------------- |
| PCSel_PCa4   | PC <- PC + 4                                         |
| PCSel_branch | PC <- PC + 4 + sign_extend(offset\|\|0<sup>2</sup>>) |
| PCSel_j      | PC <- PC[31:28] \|\| imm \|\| 0<sup>2</sup>          |
| PCSel_jr     | PC <- GPR[rs]                                        |

### D_CMP

| 信号名       | 方向 | 描述                            |
| ------------ | ---- | ------------------------------- |
| gpr_rs[31:0] | I    | **完成转发后**`$rs`寄存器中的值 |
| gpr_rt[31:0] | I    | **完成转发后**`$rt`寄存器中的值 |
| CMPOp[1:0]   | I    | 指定比较数据的方式              |
| flag         | O    | 是否满足所设条件，高电平有效    |

#### 控制信号

| CMPOp   | 操作                                                |
| ------- | --------------------------------------------------- |
| CMP_beq | beq指令: 若`GPR[rs] == GPR[rt]`，则flag置1，否则置0 |

### D_EXT

| 信号名       | 方向 | 描述                 |
| ------------ | ---- | -------------------- |
| num[15:0]    | I    | 16位需要扩展的立即数 |
| EXTOp        | I    | 指定进行扩展的方式   |
| result[31:0] | O    | 32位完成扩展的立即数 |

#### 控制信号

| EXTOp      | 操作                      |
| ---------- | ------------------------- |
| EXT_zero   | result = zero_extend(num) |
| EXT_signed | result = sign_extend(num) |

### D/E级流水线寄存器

| 信号名         | 方向 | 功能描述                                   |
| -------------- | ---- | ------------------------------------------ |
| clk            | I    | 时钟信号                                   |
| reset          | I    | **同步**复位信号，高电平有效               |
| flush          | I    | 寄存器刷新信号，高电平有效，发生阻塞时使用 |
| enable         | I    | 写使能信号，高电平有效                     |
| D_pc[31:0]     | I    | D级PC                                      |
| D_instr[31:0]  | I    | 32位指令值                                 |
| D_extres[31:0] | I    | 16位立即数扩展的结果                       |
| D_gpr_rs[31:0] | I    | GPR[rs]                                    |
| D_gpr_rt[31:0] | I    | GPR[rt]                                    |
| E_pc[31:0]     | O    | E级PC                                      |
| E_instr[31:0]  | O    | 32位指令值                                 |
| E_gpr_rs[31:0] | O    | GPR[rs]                                    |
| E_gpr_rt[31:0] | O    | GPR[rt]                                    |

## E级：执行（Execute）

本级的输入为`D_PC`, `D_Instr`, `D_extres`, `D_gpr_rs`, `D_gpr_rt`。

本级的输出为`E_PC`, `E_Instr`, `E_aluans`, `E_gpr_rt`, `E_grfWD`。

本级涉及到来自M级、W级的转发，`$rt`的值在本级转发得`D_fwd_gprrt`，和`E_PC`, `E_Instr`, `E_aluans`参与流水。

### E_ALU

| 信号名       | 方向 | 描述              |
| ------------ | ---- | ----------------- |
| A[31:0]      | I    | 32位运算数        |
| B[31:0]      | I    | 32位运算数        |
| ALUOp[2:0]   | I    | 指定ALU进行的计算 |
| result[31:0] | O    | 32位运算结果      |

#### 控制信号

| ALUOp   | 操作                          |
| ------- | ----------------------------- |
| ALU_add | result = A + B，不考虑溢出    |
| ALU_sub | result = A + B，不考虑溢出    |
| ALU_or  | result = A \| B               |
| ALU_lui | result = B \| 10<sup>16</sup> |

### E/M级流水线寄存器

| 信号名         | 方向 | 功能描述                                   |
| -------------- | ---- | ------------------------------------------ |
| clk            | I    | 时钟信号                                   |
| reset          | I    | **同步**复位信号，高电平有效               |
| flush          | I    | 寄存器刷新信号，高电平有效，发生阻塞时使用 |
| enable         | I    | 写使能信号，高电平有效                     |
| E_pc[31:0]     | I    | E级PC                                      |
| E_instr[31:0]  | I    | 32位指令值                                 |
| E_aluans[31:0] | I    | ALU的运算结果                              |
| E_gpr_rt[31:0] | I    | GPR[rt]                                    |
| M_pc[31:0]     | O    | M级PC                                      |
| M_instr[31:0]  | O    | 32位指令值                                 |
| M_aluans[31:0] | O    | ALU的运算结果                              |
| M_gpr_rt[31:0] | O    | GPR[rt]                                    |

## M级：存储器（Memory）

本级的输入为`E_PC`, `E_Instr`, `E_aluans`, `E_gpr_rt`。

本级的输出为`M_PC`, `M_Instr`, `M_aluans`, `M_dmrd`, `M_grfWD`。

本级涉及到来自M级、W级的转发，`$rt`的值在本级转发得`M_fwd_gprrt`。

本机参与流水的有`M_PC`, `M_Instr`, `M_aluans`, `M_dmrd`。

### M_DM

| 信号名    | 方向 | 描述                         |
| --------- | ---- | ---------------------------- |
| clk       | I    | 时钟信号                     |
| reset     | I    | **同步**复位信号，高电平有效 |
| WE        | I    | 写使能信号，高电平有效       |
| A[31:0]   | I    | 需要进行读/写操作的地址      |
| WD[31:0]  | I    | 32位写入RAM的数据            |
| DMOp[1:0] | I    | 指定DM进行的读/写操作方式    |
| WPC[31:0] | I    | 写入DM时对应的指令PC值       |
| RD[31:0]  | O    | 32位从RAM读出的输出数据      |

#### 控制信号

| DMOp        | 操作                          |
| ----------- | ----------------------------- |
| DM_word     | 读/写整个字，对应lw和sw指令   |
| DM_halfword | 读/写半个字，对应lh和sh指令   |
| DM_byte     | 读/写一个字节，对应lb和sb指令 |

### M/W级流水线寄存器

| 信号名         | 方向 | 功能描述                                   |
| -------------- | ---- | ------------------------------------------ |
| clk            | I    | 时钟信号                                   |
| reset          | I    | **同步**复位信号，高电平有效               |
| flush          | I    | 寄存器刷新信号，高电平有效，发生阻塞时使用 |
| enable         | I    | 写使能信号，高电平有效                     |
| M_pc[31:0]     | I    | M级PC                                      |
| M_instr[31:0]  | I    | 32位指令值                                 |
| M_aluans[31:0] | I    | ALU的运算结果                              |
| M_dmrd[31:0]   | I    | 从DM中读取的值                             |
| W_pc[31:0]     | O    | W级PC                                      |
| W_instr[31:0]  | O    | 32位指令值                                 |
| W_aluans[31:0] | O    | ALU的运算结果                              |
| W_dmrd[31:0]   | O    | 从DM中读取的值                             |

## W级：写回（Writeback）

本级与D级是重合的，需要处理向E级和M级的转发。

## 控制信号

采用分布式译码的方式，在每一级对指令译码生成控制信号

|      | opcode |     funct     | A3Sel |  ALUOp  |   ALUBSel   |    WDSel     | MemWrite |    PCSel     | EXTOp |    DMOp     |
| :--: | :----: | :-----------: | :---: | :-----: | :---------: | :----------: | :------: | :----------: | :---: | :---------: |
| add  | 000000 |    100000     |  rd   | ALU_add | ALUBSel_grf | WDSel_aluans |          |              |       |             |
| sub  | 000000 |    100010     |  rd   | ALU_sub | ALUBSel_grf | WDSel_aluans |          |              |       |             |
| ori  | 001101 | **undefined** |  rt   | ALU_or  | ALUBSel_imm | WDSel_aluans |          |              |       |             |
|  lw  | 100011 | **undefined** |  rt   | ALU_add | ALUBSel_imm |  WDSel_dmrd  |          |              |   1   |   DM_word   |
|  sw  | 101011 | **undefined** |       | ALU_add | ALUBSel_imm |              |    1     |              |   1   |   DM_word   |
| beq  | 000100 | **undefined** |       | ALU_sub | ALUBSel_grf |              |          | PCSel_branch |       |             |
| lui  | 001111 | **undefined** |  rt   | ALU_lui | ALUBSel_imm | WDSel_aluans |          |              |       |             |
|  j   | 000010 | **undefined** |       |         |             |              |          |   PCSel_j    |       |             |
| jal  | 000011 | **undefined** |  ra   |         |             |  WDSel_PCa4  |          |   PCSel_j    |       |             |
|  jr  | 001000 |    001000     |       |         |             |              |          |   PCSel_jr   |       |             |
|  lb  | 100000 | **undefined** |  rt   | ALU_add | ALUBSel_imm |  WDSel_dmrd  |          |              |   1   |   DM_byte   |
|  sb  | 101000 | **undefined** |       | ALU_add | ALUBSel_imm |              |    1     |              |   1   |   DM_byte   |
|  lh  | 100001 | **undefined** |  rt   | ALU_add | ALUBSel_imm |  WDSel_dmrd  |          |              |   1   | DM_halfword |
|  sh  | 101001 | **undefined** |       | ALU_add | ALUBSel_imm |              |    1     |              |   1   | DM_halfword |

>  A3Sel一列缺省值为5’d0，PCSel一列缺省值为PCSel_PCa8

## 转发

采用**暴力转发**的方式。由AT法的分析，不阻塞就意味着一定能够在使用该寄存器的值之前获得最新的且正确的值。因此采用暴力转发总能得到一个正确的值去覆盖原先错误的值。

```verilog
// D级转发
assign D_fwd_gprrs = (D_rs == 5'd0) ? (32'd0) : 
                    (D_rs == E_A3Sel) ? E_grfWD :
                    (D_rs == M_A3Sel) ? M_grfWD : D_gpr_rs;

assign D_fwd_gprrt = (D_rt == 5'd0) ? (32'd0) : 
                    (D_rt == E_A3Sel) ? E_grfWD :
                    (D_rt == M_A3Sel) ? M_grfWD : D_gpr_rt;


// GRF内部转发
assign RD1 = (A1 == 5'b00000) ? 32'h0000_0000 :
            (A1 == A3) ? WD : registers[A1];
assign RD2 = (A2 == 5'b00000) ? 32'h0000_0000 :
            (A2 == A3) ? WD : registers[A2];


// E级转发
assign E_grfWD = (E_WDSel == `WDSel_PCa8) ? (E_PC + 8) : 32'd0; // 不能对功能部件输出进行转发
assign E_fwd_gprrs = (E_rs == 5'd0) ? 32'd0 :
                    (E_rs == M_A3Sel) ? M_grfWD :
                    (E_rs == W_A3Sel) ? W_grfWD :
                    E_gpr_rs;

assign E_fwd_gprrt = (E_rt == 5'd0) ? 32'd0 :
                    (E_rt == M_A3Sel) ? M_grfWD :
                    (E_rt == W_A3Sel) ? W_grfWD :
                    E_gpr_rt;


// M级转发
assign M_grfWD = (M_WDSel == `WDSel_aluans) ? M_aluans :
                (M_WDSel == `WDSel_PCa8) ? (M_PC + 8) : 32'd0;
assign M_fwd_gprrt = (M_rt == 5'd0) ? (5'd0) :
                    (M_rt == W_A3Sel) ? W_grfWD :
                    M_gpr_rt;


// W级转发
assign W_grfWD = (W_WDSel == `WDSel_aluans) ? W_aluans :
                (W_WDSel == `WDSel_dmrd) ? W_dmrd :
                (W_WDSel == `WDSel_PCa8) ? (W_PC + 8) : 32'd0;
```

## 阻塞

使用组合逻辑，判断每一级中指令的$Tuse$和$Tnew$。

如果有$Tuse$ < $Tnew$，就执行阻塞。**只可能在D级进行阻塞**。

```verilog
// stall_handle.v
assign D_Tuse_rs = (D_branch | D_j2r) ? 3'd0 :
                (D_ic | D_rc | D_load | D_store) ? 3'd1 : 3'd3;

assign D_Tuse_rt = (D_branch) ? 3'd0 :
                    (D_rc) ? 3'd1 :
                    (D_store) ? 3'd2 : 3'd3;

assign E_Tnew = (E_rc | E_ic) ? 3'd1 :
                (E_load) ? 3'd2 :
                3'd0;

assign E_stall_rs = (E_A3Sel == D_rs && D_rs != 5'd0) && (E_Tnew > D_Tuse_rs);
assign E_stall_rt = (E_A3Sel == D_rt && D_rt != 5'd0) && (E_Tnew > D_Tuse_rt);

assign M_Tnew = (M_load) ? 3'd1 : 3'd0;

assign M_stall_rs = (M_A3Sel == D_rs && D_rs != 5'd0) && (M_Tnew > D_Tuse_rs);
assign M_stall_rt = (M_A3Sel == D_rt && D_rt != 5'd0) && (M_Tnew > D_Tuse_rt);

assign stall = E_stall_rs | E_stall_rt | M_stall_rs | M_stall_rt;


// mips.v
wire stall;
assign FD_WE = !stall; //冻结FD寄存器
assign IFU_WE = !stall; //冻结PC
assign DE_flush = stall; //清空DE寄存器

assign DE_WE = 1'b1;
assign EM_WE = 1'b1;
assign MW_WE = 1'b1;

assign FD_flush = 1'b0;
assign EM_flush = 1'b0;
assign MW_flush = 1'b0;
```

## 测试方案

改进了P4的随机数据生成器，添加了延迟槽。

一个测试数据如下

```mipsasm
add $a0,$0,$0
ori $t1,$0,1
ori $t2,$0,2
ori $t3,$0,3
add $t4,$t1,$t2
sub $t5,$t1,$t2
jal out
add $t3,$t4,$0

out:
ori $a0,$0,11
beq $a0,$a1,end
lui $a2,111
jr $ra
ori $a1,$0,11
end:
nop
```

## 思考题

1. 我们使用提前分支判断的方法尽早产生结果来减少因不确定而带来的开销，但实际上这种方法并非总能提高效率，请从流水线冒险的角度思考其原因并给出一个指令序列的例子。

   branch类型的$Tuse$为0，很可能产生$Tnew$ > $Tuse$，从而产生堵塞

   ```mipsasm
   ori $8, $0, 0x1
   ori $9, $0, 0x2
   beq $8, $9, L1
   ```

2. 因为延迟槽的存在，对于jal等需要将指令地址写入寄存器的指令，要写回PC + 8，请思考为什么这样设计？

   jal的后一条指令处于延迟槽中，无论判断结果如何，都将执行分支或跳转指令的下一条指令。

   如果写回PC + 4，那么执行`jr $ra`时，将会跳回到延迟槽的指令，导致其被重复执行。

3. 我们要求大家所有转发数据都来源于流水寄存器而不能是功能部件（如DM、ALU），请思考为什么？

   会造成关键路径变长，使得流水线各部分延迟不均衡，产生“木桶效应”使流水线性能严重下降。

   假设有DM到ALU输入的转发，那么修改之后，E级的周期将从原来的`ALU延迟`变为`ALU延迟 + DM延迟`，降低了时间频率。

4. 我们为什么要使用 GPR 内部转发？该如何实现？

   使得W级将要写入的数据及时反馈到GRF的输出端口，在一个时间周期内完成写和读，解决“写后读”冲突。

   实现方法为：

   ```verilog
   assign RD1 = (A1 == 5'b00000) ? 32'h0000_0000 :
               (A1 == A3) ? WD : registers[A1];
   assign RD2 = (A2 == 5'b00000) ? 32'h0000_0000 :
               (A2 == A3) ? WD : registers[A2];
   ```

5. 我们转发时数据的需求者和供给者可能来源于哪些位置？共有哪些转发数据通路？

   见“转发”部分。

6. 在课上测试时，我们需要你现场实现新的指令，对于这些新的指令，你可能需要在原有的数据通路上做哪些扩展或修改？提示：你可以对指令进行分类，思考每一类指令可能修改或扩展哪些位置。

   增加的指令主要分为三种类型：**计算、跳转、存储**。

   计算指令的处理步骤

   - 修改ALU支持新的运算，感觉用`always @(*)`块比用`assign`写起来方便，善用`function`模块
   - $Tuse$和$Tnew$与`calc_rc`（R型计算指令）保持一致

   跳转指令的处理步骤

   - 前几个P遇到过的跳转类指令有`条件跳转+无条件链接`，`条件跳转+条件链接`，`条件跳转+（无）条件链接+不跳转时清空延迟槽`
   - 条件跳转：只增加CMP中的判断方法
   - 链接：无条件链接直接将A3Sel设为31，与jal类似；对于有条件链接，将CMP中的flag信号进行流水，在controller里判断`A3Sel = (link && flag) ? 31 : 0`，每一级根据这个信号判断写入操作，生成控制信号时可以视作`branch`和`jr`的“混合体”。
   - 清空延迟槽，从CMP中引出信号，置1则表示**发生比较**且**未达到跳转条件**，信号名为`flush_flag`，然后`assign FD_flush = (flush_flag && !stall)`。stall有效说明此时传入CMP的值的最新版本暂未计算出来，无法转发。

   存储指令的处理步骤

   - 前几个P遇到过的存储指令常常涉及到`条件存储`的问题，到M级才知道需要写什么
   - 如果D级要读寄存器，而且条件存储的指令可能要写相同编号的寄存器，那么就阻塞一个周期

   修改通路的时候记得配合`def.v`相关宏定义的修改。

7. 确定你的译码方式，简要描述你的译码器架构，并思考该架构的优势以及不足。

   我采用的是分布式译码器。

   该架构的**优势**在于不需要将控制信号流水传递，只需要流水传递指令，在每一级再译码即可。这样做降低了流水线需要传递的信号量，也避免了因为忘记流水某个信号而产生的错误。

   但是，分布式译码需要在每一级都实例化一个控制器，每级都有端口闲置造成浪费，同时会增加后续流水级的逻辑复杂度。从实际应用的角度来看，使用多个控制器会增长关键路径，降低了流水线运行效率，原因与问题3相类似。