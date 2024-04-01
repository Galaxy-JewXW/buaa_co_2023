import random


Calc_r = ['add', 'sub', 'and', 'or', 'slt', 'sltu']
Calc_i = ['ori', 'addi', 'ori']
Load = ['lw', 'lb', 'lh']
Store = ['sw', 'sb', 'sh']
B_type = ['beq', 'bne']
J_type = ['jal']
Shift = []
Shift_v = []
md = ['mult', 'multu']
# md = ['mult', 'multu', 'div', 'divu']
mf_mt = ['mfhi', 'mflo', 'mthi', 'mtlo']

filename = "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\test.asm"
# 输出文件位置
# label = [0, 1]
label = [0]
# 输出label的编号范围，事先存入0防止在第一次输出标签前出现跳转指令
cnt = 0
# 可执行代码的行数
flag = 2
# 当前所标出过的编号号码
jal = []
# 使用过的jal对应标签编号
R_num = len(Calc_r)
I_num = len(Calc_i)
L_num = len(Load)
S_num = len(Store)
B_num = len(B_type)
J_num = len(J_type)
MD_num = len(md)
MF_num = len(mf_mt)
# 各类指令出现频率设置
f_all = 1
f_R = 4*random.randint(1, 4)*f_all
f_I = 4*random.randint(1, 4)*f_all
f_L = 4*random.randint(1, 4)*f_all
f_S = 4*random.randint(1, 4)*f_all
f_B = 0*random.randint(1, 2)*f_all
f_J = 0*random.randint(1, 2)*f_all
f_md = 2*random.randint(1, 4)*f_all
f_mf = 2*random.randint(1, 4)*f_all
num = f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num + \
    f_B*B_num+f_J*J_num+f_md*MD_num+f_mf*MF_num+1
begin = 13
end = 31


class get_Ori:
    def __init__(self):
        # 对应指令生成随机数
        self.rs = random.randint(begin, end)
        self.rt = random.randint(begin, end)
        self.imm16 = random.randint(0, 1 << 16-1)
        self.main()

    def main(self):
        if self.rs == 28 or self.rs == 29 or self.rs == 30:
            self.rs = self.rs-3
        if self.rt == 28 or self.rt == 29 or self.rt == 30:
            self.rt = self.rt-3
        self.code = 'ori' + ' ' + '$' + \
            str(self.rt) + ',' + '$' + \
            str(self.rs) + ',' + str(self.imm16) + '\n'


class get_Code:
    def __init__(self):
        # 对应指令生成随机数
        self.rs = random.randint(begin, end)
        self.rt = random.randint(begin, end)
        self.rd = random.randint(begin, end)
        self.imm16 = random.randint(0, 1 << 16-1)
        self.imm26 = random.randint(0, 1 << 26-1)
        # self.mem = random.randint(0, 100)
        self.mem = random.randint(0, 3)
        # self.mem = random.randint(0, 3)
        # 存储指令类型
        self.list = []
        # get函数
        self.get_R()
        self.get_I()
        self.get_L()
        self.get_S()
        self.get_B()
        self.get_J()
        self.get_MD()
        self.get_MF()
        self.get_Label()
        self.main()

    def get_R(self):
        random1 = random.randint(0, R_num - 1)
        type1 = Calc_r[random1]
        self.list.append(type1)

    def get_I(self):
        random2 = random.randint(0, I_num - 1)
        type2 = Calc_i[random2]
        self.list.append(type2)

    def get_L(self):
        random3 = random.randint(0, L_num - 1)
        type3 = Load[random3]
        self.list.append(type3)

    def get_S(self):
        random4 = random.randint(0, S_num - 1)
        type4 = Store[random4]
        self.list.append(type4)

    def get_B(self):
        random5 = random.randint(0, B_num - 1)
        type5 = B_type[random5]
        self.list.append(type5)

    def get_J(self):
        random6 = random.randint(0, J_num - 1)
        type6 = J_type[random6]
        self.list.append(type6)

    def get_MD(self):
        random7 = random.randint(0, MD_num - 1)
        type7 = md[random7]
        self.list.append(type7)

    def get_MF(self):
        random8 = random.randint(0, MF_num - 1)
        type8 = mf_mt[random8]
        self.list.append(type8)

    def get_Label(self):
        random9 = random.randint(0, len(label)-1)
        ran = label[random9]
        return ran

    def main(self):
        sel = random.randint(0, num+100)
        if self.rs == 28 or self.rs == 29 or self.rs == 30:
            self.rs = self.rs-3
        if self.rt == 28 or self.rt == 29 or self.rt == 30:
            self.rt = self.rt-3
        if self.rd == 28 or self.rd == 29 or self.rd == 30:
            self.rd = self.rd-3
        # 控制参数类型
        if sel in range(0, f_R*R_num):
            # 通过控制随机数的范围来决定输出各种指令的频率,并用各种指令的数目保证各指令出现概率基本相同
            self.code = self.list[0] + ' ' + '$' + \
                str(self.rd) + ' ' + ',' + '$' + \
                str(self.rs) + ' ' + ',' + '$' + str(self.rt) + '\n'
        elif sel in range(f_R*R_num, f_R*R_num+f_I*I_num):
            self.code = self.list[1] + ' ' + '$' + \
                str(self.rt) + ',' + '$' + \
                str(self.rs) + ',' + str(self.imm16) + '\n'
        elif sel in range(f_R*R_num+f_I*I_num, f_R*R_num+f_I*I_num+f_L*L_num):
            if self.list[2] == 'lb' or self.list[2] == 'lbu':
                self.code = self.list[2] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
            elif self.list[2] == 'lh' or self.list[2] == 'lhu':
                self.code = self.list[2] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
            else:
                self.code = self.list[2] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
        elif sel in range(f_R*R_num+f_I*I_num+f_L*L_num, f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num):
            if self.list[3] == 'sb':
                self.code = self.list[3] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
            elif self.list[3] == 'sh':
                self.code = self.list[3] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
            else:
                self.code = self.list[3] + ' ' + '$' + \
                    str(self.rt) + ',' + str(self.mem) + \
                    '(' + '$' + str((self.rt+1) % 17+3) + ')'+'\n'
        elif sel in range(f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num, f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num):
            self.code = self.list[4] + ' ' + '$' + \
                str(self.rt) + ',' + '$' + \
                str(self.rs) + ',' + 'label_' + \
                str(self.get_Label()) + '\n' +\
                'nop' + '\n'
        elif sel in range(f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num, f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num+f_J*J_num):
            if self.list[5] == 'jal':
                node = self.get_Label()
                self.code = self.list[5] + ' ' + \
                    'label_' + str(node) + '\n' +\
                    'nop' + '\n'
                jal.append(node)
            elif self.list[5] == 'j':
                self.code = self.list[5] + ' ' + \
                    'label_' + str(self.get_Label()) + '\n' +\
                    'nop' + '\n'
        elif sel in range(f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num+f_J*J_num, f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num+f_J*J_num+f_md*MD_num):
            self.code = self.list[6] + ' ' + '$' + \
                str(self.rt) + ',' + '$' + \
                str(self.rs) + '\n'
        elif sel in range(f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num+f_J*J_num+f_md*MD_num, f_R*R_num+f_I*I_num+f_L*L_num+f_S*S_num+f_B*B_num+f_J*J_num+f_md*MD_num+f_mf*MF_num):
            self.code = self.list[7] + ' ' + '$' + \
                str(self.rs) + '\n'
        else:
            self.code = 'lui' + ' ' + \
                '$' + str(self.rt) + ',' + str(self.imm16) + '\n'


with open(filename, 'w+') as f:
    f.write('.text'+'\n')
    f.write('ori $t0, $0, 0x1c01'+'\n' +
            'mtc0 $t0, $12'+'\n')
    # f.write('ori $at,$0,0xfffc'+'\n')
    for cnt in range(2*begin, 2*end):
        b = get_Ori()
        f.write(b.code)
    cnt = 0
    f.write('syscall'+'\n')
    for cnt in range(0, num):
        a = get_Code()
        # if cnt == 0:
        # f.write('jal'+' label_0'+'\n'+'nop'+'\n')
        f.write(a.code)
        if random.randint(0, num) == 1 and label != []:
            # 通过控制random范围来决定标签和jr出现的概率
            f.write('label_' + str(flag) + ':' + '\n')
            label.append(flag)
            flag = flag+1
            # f.write('jr $ra' + '\n')
            # f.write('nop' + '\n')
        # if cnt == 10:
        #     f.write('jr $ra' + '\n')
        #     f.write('nop' + '\n')
        # if cnt == 5:
        if cnt == num-20:
            #     f.write('jal'+' label_1' + '\n')
            #     f.write('nop' + '\n')
            f.write('label_0' + ':' + '\n')
            # f.write('addi $ra,$ra,1'+'\n')
            # f.write('jr $ra' + '\n')
            # f.write('nop' + '\n')
        #     f.write('label_1' + ':' + '\n')
    f.write('.ktext 0x4180'+'\n' +
            '_main_handler:'+'\n' +
            '    mfc0 $k0, $13'+'\n' +
            '    mfc0 $k0, $14'+'\n' +
            '    andi $k0, $k0, 0xfffc'+'\n' +
            '    addi $k0, $k0, 4'+'\n' +
            '    mtc0 $k0, $14'+'\n' +
            '    sb $0, 0x7f20($0)'+'\n' +
            '    eret'+'\n')
    f.close()
