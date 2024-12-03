mxm = int(input())

for i in range(mxm+1):
    if i%2 != 0:
        print(i, end = " ")

print()
for i in reversed(range(1, mxm+1)):
    if i%2 == 0:
        print(i, end = " ")