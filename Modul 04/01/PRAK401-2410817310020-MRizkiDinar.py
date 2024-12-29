val, char = input().split()
val = int(val)
formatter = 21

for i in range(1, 51):
    if i == formatter:
        formatter += 20
        print()
    if i % val == 0:
        print(char, end = " ")
        continue
    print(i, end = " ")