`timescale 1ns / 1ps

module ctrl(
    input [31:0] inStr,

    output regWrite,
    output regDst,
    output regRa,
    output regSrc,
    output regPc,
    output regCp0,

    output aluSrc,
    output extendType,
    output shiftSrc,

    output memWrite,
    
    output jump,
    output jumpSrc,

    output [3:0] aluControl,
    output if_signed,
    output if_byte,
    output if_half,
    output load_extend,

    output resultSrc,
    output hluDst,
    output hluWrite,
    output hluUnsigned,
    output [3:0] hluControl,

    output cp0Write,

    //classification
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,

    output [4:0] dst,
    output unknown,

    output calr,
    output cali,
    output store,
    output load,

    output jump_imm,
    output jump_reg,
    output jump_type,

    output branch_r,
    output branch_i,
    output branch_type,

    output shift_reg,
    output shift_shamt,
    
    output cal_hl,
    output read_hl,
    output write_hl,

    output cp0_write,
    output cp0_read,

    output eret,
    output syscall,
    output break
    );

wire [5:0] op = inStr[31:26];
wire [5:0] func = inStr[5:0];
assign rd = inStr[15:11];
assign rt = inStr[20:16];
assign rs = inStr[25:21];

wire _add = (op==6'b000000) & (func==6'b100000);
wire _addu = (op==6'b000000) & (func==6'b100001);
wire _sub = (op==6'b000000) & (func==6'b100010);
wire _subu = (op==6'b000000) & (func==6'b100011);
wire _and = (op==6'b000000) & (func==6'b100100);
wire _or = (op==6'b000000) & (func==6'b100101);
wire _xor = (op==6'b000000) & (func==6'b100110);
wire _nor = (op==6'b000000) & (func==6'b100111);
wire _sll = (op==6'b000000) & (func==6'b000000);
wire _sllv = (op==6'b000000) & (func==6'b000100);
wire _srl = (op==6'b000000) & (func==6'b000010);
wire _srlv = (op==6'b000000) & (func==6'b000110);
wire _sra = (op==6'b000000) & (func==6'b000011);
wire _srav = (op==6'b000000) & (func==6'b000111);
wire _slt = (op==6'b000000) & (func==6'b101010);
wire _sltu = (op==6'b000000) & (func==6'b101011);
wire _jr = (op==6'b000000) & (func==6'b001000);
wire _jalr = (op==6'b000000) & (func==6'b001001);

wire _addi = op==6'b001000;
wire _addiu = op==6'b001001;
wire _slti = op==6'b001010;
wire _sltiu = op==6'b001011;
wire _andi = op==6'b001100;
wire _ori = op==6'b001101;
wire _xori = op==6'b001110;
wire _lui = op==6'b001111;
wire _beq = op==6'b000100;
wire _bne = op==6'b000101;
wire _bgez = op==6'b000001;
wire _bgtz = op==6'b000111;
wire _blez = op==6'b000110;
wire _bltz = op==6'b000001;
wire _j = op==6'b000010;
wire _jal = op==6'b000011;
wire _sw = op==6'b101011;
wire _sh = op==6'b101001;
wire _sb = op==6'b101000;
wire _lw = op==6'b100011;
wire _lh = op==6'b100001;
wire _lb = op==6'b100000;
wire _lbu = op==6'b100100;
wire _lhu = op==6'b100101;

wire _mfhi = (op==6'b000000) & (func==6'b010000);
wire _mflo = (op==6'b000000) & (func==6'b010010);
wire _mthi = (op==6'b000000) & (func==6'b010001);
wire _mtlo = (op==6'b000000) & (func==6'b010011);
wire _mult = (op==6'b000000) & (func==6'b011000);
wire _multu = (op==6'b000000) & (func==6'b011001);
wire _div = (op==6'b000000) & (func==6'b011010);
wire _divu = (op==6'b000000) & (func==6'b011011);

wire _eret = inStr==32'b010000_1000_0000_0000_0000_0000_011000;
wire _syscall = (op==6'b000000) & (func==6'b001100);
wire _break = (op==6'b000000) & (func==6'b001101);

wire _mfc0 = (op==6'b010000) & (rs==5'b00000) & (inStr[10:0]==0);
wire _mtc0 = (op==6'b010000) & (rs==5'b00100) & (inStr[10:0]==0);


assign regWrite = _add | _addu | _sub | _or | _sll |
                  _sllv | _slt | _ori | _lui | _sltu |
                  _jal | _jalr | _lw | _lh | _lb | _subu |
                  _and | _srl | _srlv | _addi | _addiu |
                  _slti | _andi | _xor | _xori | _nor |
                  _sltiu | _sra | _srav | _lbu | _lhu |
                  _mfhi | _mflo | _mfc0;

assign regDst = _add | _addu | _sub | _or | _sll |
                _sllv | _slt | _sltu | _jal | _jalr |
                _subu | _and | _srl | _srlv | _xor |
                _nor | _sra | _srav | _mfhi | _mflo;

assign regRa = _jal;

assign regSrc = _lw | _lh | _lb | _lhu | _lbu;

assign regPc = _jal | _jalr;

assign regCp0 = _mfc0;

assign aluSrc = _ori | _lui | _sw | _sh | _sb |
                _lw | _lh | _lb | _addi | _addiu |
                _slti | _andi | _xori | _sltiu |
                _lhu | _lbu;

assign extendType = _ori | _xori | _andi;

assign shiftSrc = _sll | _srl | _sra;

assign memWrite = _sw | _sh | _sb;

assign jump = _j | _jr | _jal | _jalr;

assign jumpSrc = _jr | _jalr;

assign if_byte = _sb | _lb | _lbu;

assign if_half = _sh | _lh | _lhu;

assign load_extend = _lb | _lh;

assign aluControl = (_add | _addu | _addi | _addiu |
                          _sw | _sh | _sb |
                          _lw | _lh | _lb | _lhu | _lbu) ? 4'b0000 :
                    (_sub | _subu | _beq | _bne) ? 4'b0001 :
                    (_and | _andi) ? 4'b0010 :
                    (_ori | _or) ? 4'b0011 :
                    (_xor | _xori) ? 4'b0100 :
                    (_nor) ? 4'b0101 :
                    (_sll | _sllv) ? 4'b0110 :
                    (_srl | _srlv) ? 4'b0111 :
                    (_sra | _srav) ? 4'b1000 :
                    (_lui) ? 4'b1001 :
                    (_slt | _slti) ? 4'b1010 :
                    (_sltu | _sltiu) ? 4'b1011 :
                    4'b0000;

assign if_signed = _add | _addi | _sub;

assign resultSrc = _mfhi | _mflo;

assign hluDst = _mfhi | _mthi;

assign hluWrite = _mthi | _mtlo;

assign hluUnsigned = _multu | _divu;

assign hluControl = (_mult | _multu) ? 4'b0001 :
                    (_div | _divu) ? 4'b0010 :
                    4'b0000;

assign cp0Write = _mtc0;

//------instruction classify------
//--------------------------------

assign unknown = ~(_add | _addi | _addiu | _addu | _and |
                  _andi | _beq | _bgez | _bgtz | _blez |
                  _bltz | _bne | _break | _div | _divu |
                  _eret | _j | _jal | _jalr | _jr | _lb |
                  _lbu | _lh | _lhu | _lui |
                  _lw | _mfc0 | _mtc0 | _mfhi | _mflo |
                  _mthi | _mtlo | _mult | _multu | _nor |
                  _or | _ori | _sb | _sh | _sw | _sll |
                  _sllv | _slt | _sltu | _slti | 
                  _sltiu | _sra | _srav | _srl | _srlv |
                  _sub | _subu | _syscall | _xor |
                  _xori
                  );

assign calr = _add | _addu | _sub | _subu | _and |
              _or | _xor | _nor | _slt | _sltu;

assign cali = _addi | _addiu | _slti | _sltiu | _andi |
              _ori | _xori | _lui;

assign store = _sw | _sh | _sb;

assign load = _lw | _lh | _lb | _lhu | _lbu;

assign jump_imm = _j | _jal;

assign jump_reg = _jr | _jalr;

assign jump_type = jump_imm | jump_reg;

assign branch_r = _beq | _bne;

assign branch_i = _bgez | _bgtz | _blez | _bltz;

assign branch_type = branch_r | branch_i;

assign shift_shamt = _sll | _srl | _sra;

assign shift_reg = _sllv | _srlv | _srav;

assign dst = regRa==1 ? 5'b11111 :
            regDst==1 ? rd :
            regWrite==1 ? rt  :
            5'b00000 ;

assign cal_hl = _mult | _multu | _div | _divu;

assign read_hl = _mfhi | _mflo;

assign write_hl = _mthi | _mtlo;

assign cp0_write = _mtc0;

assign cp0_read = _mfc0;

assign eret = _eret;

assign syscall= _syscall;

assign break = _break;

endmodule