# 下面的新的测试代码可以用于解决cmd测试次数过多出现“输入错误，命令行异常”的问题
import os
i = 1
while i <= 5000:
    print('num = ' + str(i))
    os.chdir('D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic')
    os.system('python error_test.py')
    os.system(
        'java -jar Mars.jar nc db lg ex mc LargeText 100000 test.asm >mips_out.txt')
    os.system(
        'java -jar mars.jar db mc CompactDataAtZero a dump .text HexText ../mips/code.txt test.asm > mips_log.txt')
    # os.system(
    # 'java -jar mars.jar db mc CompactDataAtZero a dump .text HexText ../mips/text.txt test.asm > mips_log.txt')
    os.system(
        'java -jar Mars.jar a db mc CompactDataAtZero dump 0x00004180-0x00004ffc HexText ../mips/handler.txt test.asm > mips_log.txt')
    # os.system('merge.exe')
    # os.chdir('D:\\SoftWare\\ISE\\14.7\\ISE_DS')
    # print(os.environ.get("XILINX"))
    # # print(os.environ.keys())
    # os.system("settings64.bat")
    # print(os.environ.get("XILINX"))
    # # print(os.environ.keys())
    os.chdir('D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\mips')
    os.system(
        'D:\\SoftWare\\ISE\\14.7\\ISE_DS\\ISE\\bin\\nt64\\fuse -nodebug -prj mips.prj \
        -o mips.exe mips_txt 1>../statistic/isim_log.txt 2>../statistic/isim_warning_log.txt')
    os.system(
        'mips.exe -nolog -tclbatch mips.tcl > isim_out.txt')
    os.chdir('D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic')
    os.system('python diff.py')
    i = i+1
