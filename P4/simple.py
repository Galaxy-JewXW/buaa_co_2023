with open("in.txt") as f:
    l = f.readlines()

for i in range(len(l)):
    a = l[i].replace("\n", "")
    print(f"ROM[{i}] <= 32'h{a};")