val, mult = map(int, input().split())
row = 0
SUM = 0

for i in range(2, val+2):
    for j in reversed(range(1 ,i)):
        
        row+= (j * mult)
        print(f"({j} * {mult})", end = "")
        if j == 1:
            print(end = " = ")
        else:
            print(end = " + ")
        
    print(row)
    SUM += row
    row = 0
print(SUM)