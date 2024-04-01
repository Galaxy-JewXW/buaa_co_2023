# 使用方法：运行完之后会自动在当前目录生成test.mips和test.txt文件，对应mips汇编和16进制机器码，导入运行即可
# ps. lw只会在已经存入过的内存范围内读取，sw会从0开始按顺序存入
# ppss. 为防止死循环或者过快结束，beq只会在当前指令的后10条指令之间跳转
from random import randint
from random import choice
instruct_R = {
    "add": "100000",
    "sub": "100010"
}
R = ["add", "sub"]
instruct_I = {
    "ori": "001101",
    "lw": "100011",
    "sw": "101011",
    "beq": "000100",
    "lui": "001111"
}
I = ["ori", "lw", "sw", "beq", "lui"]
instructCounter = 0
memoryAddr = -1
instructNum = 300

def generate_R():
    op = "000000"
    rs = randint(0, 31)
    rt = randint(0, 31)
    rd = randint(0, 31)
    shamt = "00000"
    instruct = choice(R)
    func = instruct_R[instruct]
    mips = instruct + " $" + str(rd) + ", $" + str(rs) + ", $" + str(rt)
    binCode = '0b' + op + bin(rs)[2:6].zfill(5) + bin(rt)[2:6].zfill(5) + bin(rd)[2:6].zfill(5) + shamt + func
    hexCode = hex(int(binCode, 2))
    return mips, binCode, hexCode
def generate_I():
    global memoryAddr
    instruct = choice(I)
    op = instruct_I[instruct]
    rs = randint(0, 31)
    rt = randint(0, 31)
    imm = randint(0, 65535)
    # imm
    if(instruct == "lw"):
        if(memoryAddr == -1):
            return "nop", "0b00000000000000000000000000000000", "0x00000000"
        else:
            imm = randint(0, memoryAddr) * 4
    elif(instruct == "sw"):
        memoryAddr = memoryAddr + 1
        imm = memoryAddr * 4
    elif(instruct == "beq"):
        imm = randint(instructCounter + 1, min(instructCounter + 10, instructNum - 1))
    # mips
    if(instruct == "lui"):
        rs = 0
        mips = instruct + " $" + str(rt) + ", " + str(imm)
    elif(instruct == "sw" or instruct == "lw"):
        mips = instruct + " $" + str(rt) + ' ' + str(imm) + "($0)"
    elif(instruct == "beq"):
        mips = instruct + " $" + str(rt) + ", $" + str(rs) + ", " + "lable" + str(imm)
    else:
        mips = instruct + " $" + str(rt) + ", $" + str(rs) + ", " + str(imm)
    binCode = '0b' + op + bin(rs)[2:6].zfill(5) + bin(rt)[2:6].zfill(5) + bin(imm)[2:17].zfill(16)
    hexCode = hex(int(binCode, 2))
    return mips, binCode, hexCode

if __name__ == "__main__":
    mipsFile = open("test.mips", "w")
    hexFile = open("test.txt", "w")
    hexFile.write("v2.0 raw\n")
    for i in range(1, instructNum):
        code = "", "", ""
        instructCounter = instructCounter + 1
        if randint(0, 1) == 0:
            code = generate_I()
        else:
            code = generate_R()
        mipsFile.write("lable" + str(instructCounter) + ':\n')
        mipsFile.write(code[0])
        mipsFile.write("\n")
        hexFile.write(code[2])
        hexFile.write("\n")
        print("lable" + str(instructCounter) + ':')
        print(code)