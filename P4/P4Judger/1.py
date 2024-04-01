import random
import sys
label = [0]*3200
labelIndex = 0
extremeReg = [-2, -1, 0, 1, 2, -2147483648, -2147483647, 2147483646, 2147483647]
sizeER = 8
extremeImmu16 = [0, 1, 2, 3, 65533, 65534, 65535]
sizeEIu16 = 6 

#0.open test.asm
sys.stdout = open("D:\BUAA\practice\logism\cpu_test\\test.asm", "w")

#1.instruction
def add(rd, rs, rt):
    if rd == 0:
        return
    print("add $"+str(rd)+",$"+str(rs)+",$"+str(rt))
    return
def sub(rd, rs, rt):
    if rd == 0: 
        return
    print("sub $"+str(rd)+",$"+str(rs)+",$"+str(rt))
    return
def ori(rt, rs, imm):
    if rt == 0:
        return
    print("ori $"+str(rt)+",$"+str(rs)+","+str(imm))
    return
def lw(rt, base):
    if rt == 0:
        return
    ori(base, 0, random.randint(1,6) * 4)
    offset = random.randint(0,40) * 4
    print("lw $"+str(rt)+","+str(offset)+"($"+str(base)+")")
    return
def sw(base, rt):
    ori(base, 0, random.randint(1,6) * 4)
    offset = random.randint(0,40) * 4
    print("sw $"+str(rt)+","+str(offset)+"($"+str(base)+")")
    return
def lui(rt, imm):
    if rt == 0:
        return
    print("lui $"+str(rt)+","+str(imm))
    return

#2.generate instruction
def generate(op, rs, rt, rd):
    match op:
        case 0:
            print("nop")    
        case 1:
            sub(rd, rs, rt)
        case 2:
            imm = random.randint(0, 456)
            ori(rt, rs, imm)
        case 3:
            lw(rt, rs)
        case 4:
            sw(rs, rt)        
        case 5:
            imm = random.randint(0, 456)
            lui(rt, imm)  
        case 6:
            add(rd, rs, rt)
        case _:
            return    
    return

#3.main logic
for index in range(0,31):
    imm = random.randint(3, 12)
    ori(index, 0, imm)

for i in range(0, 200):
    rs = random.randint(0,31)
    rt = random.randint(0,31)
    rd = random.randint(0,31)
    isExtreme = random.randint(0, 1)
    op = random.randint(0,6)  
    
    if op == 2:
        if isExtreme == 0:
            generate(op, rs, rt, rd)
        else:
            ori(rs, 0, extremeReg[i%9])
            ori(rt, 0, extremeReg[random.randint(0,sizeER)])
            ori(rt, rs, extremeImmu16[random.randint(0,sizeEIu16)])
            ori(rt, 0, random.randint(3, 12))
            ori(rs, 0, random.randint(3, 12))
    elif op == 1 or op == 6:
        if isExtreme == 0:
            generate(op, rs, rt, rd)
        else:
            ori(rs, 0, extremeReg[i%9])
            ori(rt, 0, extremeReg[random.randint(0,sizeER)])
            ori(rd, 0, extremeReg[random.randint(0,sizeER)])
            generate(op, rs, rt, rd)
            ori(rs, 0, random.randint(3, 12))
            ori(rt, 0, random.randint(3, 12))
            ori(rd, 0, random.randint(3, 12))
    elif op == 5:
        if isExtreme == 0:
            generate(op, rs, rt, rd)
        else:
            ori(rt, 0, extremeReg[random.randint(0,sizeER)])
            lui(rt, extremeImmu16[random.randint(0,sizeEIu16)])
            ori(rt, 0, random.randint(3, 12))
    else:
        generate(op, rs, rt, rd)   

    if i % 30 == 0:
        index = int(i / 30)
        if index < 3:
            if index != 0:
                jumpZoneIndex = int(index - 1)
                rt = random.randint(0,31)
                rs = random.randint(0,31)
                print("beq $"+str(rt)+",$"+str(rs)+","+"JumpZone"+str(jumpZoneIndex))
                print("nop")
                print("JumpOut"+str(jumpZoneIndex)+":")  
            print("jal Text"+str(index))
            print("nop")
            print("JumpZone"+str(index)+":")
            generate(op, rs, rt, rd)
            print("jal JumpOut"+str(index))
            print("nop")
            print("Text"+str(index)+":")
        else:
            if index == 3:
                jumpZoneIndex = int(index - 1)
                rt = random.randint(0,31)
                rs = random.randint(0,31)
                print("beq $"+str(rt)+",$"+str(rs)+","+"JumpZone"+str(jumpZoneIndex))
                print("nop")
                print("JumpOut"+str(jumpZoneIndex)+":")  
            
            randomJump = random.randint(index,index+1) if index < 6 else index
            rt = random.randint(0,31)
            rs = random.randint(0,31)
            print("beq $"+str(rt)+",$"+str(rs)+","+"JumpOut"+str(randomJump))   
            print("nop")
            print("JumpOut"+str(index)+":")  