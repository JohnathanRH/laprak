x = []

while len(x) < 6:
    x.extend(list(map(int, input().split())))

cal = (x[0]-x[1])*(x[2]/x[3])-(x[4]+x[5])
result = round(cal, 3)

print("{:.3f}".format(result))