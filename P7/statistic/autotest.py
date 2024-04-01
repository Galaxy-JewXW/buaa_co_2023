#! /usr/bin/python3
import os
import shutil
import fileinput
def examine_single_file():
    os.system('java -jar Mars.jar db nc mc LargeText ex lg test.asm > Mars_out.txt')
    for line in fileinput.input('test.asm', inplace=1):
        line=line.replace('addu', 'add')
        line=line.replace('subu', 'sub')
        print(line,end='')
    os.system('java -jar Mars.jar db nc mc LargeText a dump .text HexText code.txt test.asm')
    with open('code.txt') as f:
        line_num = len(f.readlines())
    with open('code.txt', 'a') as f:
        f.writelines('1000ffff\n')
        for i in range(line_num + 2, 1121):
            f.writelines('00000000\n')
    os.system('java -jar Mars.jar db nc mc CompactDataAtZero a dump 0x4180-0x6ffc HexText kcode.txt test.asm')
    with open('code.txt', 'a') as tarf:
        with open('kcode.txt') as f:
            kcode = f.readlines()
            tarf.writelines(kcode)
        tarf.writelines('1000ffff\n')
    os.system('export XILINX=/opt/Xilinx/14.7/ISE_DS/ISE/ && ./mips.exe -nolog -tclbatch mips.tcl > ISE_out.txt')
    with open('ISE_out.txt') as f:
        ISE_out = f.readlines()
    with open('Mars_out.txt') as f:
        Mars_out = f.readlines()
    for i in range(len(ISE_out)):
        ISE_out[i] = ISE_out[i].rstrip()
    for i in range(len(Mars_out)):
        Mars_out[i] = Mars_out[i].rstrip()
    Mars_out = Mars_out[:-1]
    temp = []
    for i in ISE_out:
        if '$ 0' in i:
            temp.append(i)
    
    ISE_no_zero = []
    for i in ISE_out:
        if i not in temp:
            ISE_no_zero.append(i)
    
    temp = []
    for i in Mars_out:
        if '$ 0' in i:
            temp.append(i)
    Mars_no_zero = []
    for i in Mars_out:
        if i not in temp:
            Mars_no_zero.append(i)
    for i in range(len(ISE_no_zero)):
        if 'Finished' in ISE_no_zero[i]:
            break
    ISE_useful = ISE_no_zero[i+1:]
    
    is_right = True
    len_ISE = len(ISE_useful)
    len_Mars = len(Mars_no_zero)
    if len_ISE!=len_Mars:
        if len_ISE > len_Mars:
            return False,'ISE gives more output, details will be output to ./Errors/', [Mars_no_zero, ISE_useful]
        else:
            return False,'Mars gives more output, details will be output to ./Errors/', [Mars_no_zero, ISE_useful]
        is_right = False
    else:
        for i in range(len_Mars):
            # if Mars_no_zero[i] != ISE_useful[i]:
            if Mars_no_zero[i] not in ISE_useful[i]:
                return False, f'Error occurs at line {i}, details will be output to ./Errors/', [Mars_no_zero, ISE_useful]
                is_right = False
                break
    if is_right==True:
        return True,'No error occurs', []

if not os.path.exists('mips.exe'):
    os.system('export XILINX=/opt/Xilinx/14.7/ISE_DS/ISE/ && /opt/Xilinx/14.7/ISE_DS/ISE/bin/lin64/fuse -nodebug -prj mips.prj -o mips.exe mips_txt')

if not os.path.exists('Errors'):
    os.mkdir('Errors')
for temp_file_basename in os.listdir('Errors'):
    temp_file = os.path.join('Errors', temp_file_basename)
    os.remove(temp_file)
test_folder = 'test_sources'
source_list = os.listdir(test_folder)
source_num = len(source_list)
for source_basename in source_list:
    source = os.path.join(test_folder,source_basename)
    shutil.copy(source,'./test.asm')
    file_list = []
    right, message, file_list = examine_single_file()
    # delete_list = ['code.txt','test.asm', 'Mars_out.txt', 'ISE_out.txt', 'kcode.txt']
    delete_list = ['test.asm', 'Mars_out.txt', 'ISE_out.txt', 'kcode.txt']
    for del_file in delete_list:
        os.remove(del_file)
    print(f'for file {source_basename}, ',message)
    if right:
        continue
    error_basename = source_basename.replace('.asm','') + '_error.txt'
    error = os.path.join('./Errors', error_basename)
    with open(error, 'a') as f:
        f.writelines('Mars_useful_result                  ISE_useful_result\n')
        lots_space = '        '
        min_len = min(len(file_list[0]), len(file_list[1]))
        i = 0
        for i in range(min_len):
            f.writelines(f'{file_list[0][i]}          {file_list[1][i]}\n')
        if len(file_list[0])>len(file_list[1]):
            for j in  range(i+1, len(file_list[0])):
                f.writelines(f'{file_list[0][j]}\n')
        if len(file_list[0])<len(file_list[1]):
            for j in range(i+1, len(file_list[1])):
                f.writelines(f'{lots_space}          {file_list[1][j]}\n')
