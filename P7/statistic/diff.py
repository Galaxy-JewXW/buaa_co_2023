# from filediff.diff import file_diff_compare
import os

tmp = open(
    "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\mips_out.txt", "r")
out = open(
    "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\mips_out_another.txt", "w")
std = open(
    "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\mips\\isim_out.txt", "r")
isim = open(
    "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\isim_out.txt", "w")
while True:
    line = tmp.readline()
    if not line:
        break
    line = line.replace(" ", "")
    line = line.replace("\t", "")
    out.write(line)
out.write("\n")
while True:
    line = std.readline()
    if not line:
        break
    if line[0].isspace():
        line = line.replace(" ", "")
        line = line.replace("\t", "")
        isim.write(line)
    elif line[0] == '@':
        line = line.replace(" ", "")
        line = line.replace("\t", "")
        isim.write(line)
isim.write("\n")
out.close()
tmp.close()
std.close()
isim.close()
result = open(
    "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\result.txt", "a+")
os.system("cmp.exe")
result.write(
    "---------------------------------test------------------------------------------- "+"\n\n")
result.close()
# file_diff_compare("D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\mips_out_another.txt",
#                   "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\isim_out.txt")
