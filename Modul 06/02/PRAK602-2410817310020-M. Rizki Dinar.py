n = int(input())
inp = []
while len(inp)<n:
    inp.extend(list(map(int, input().split())))

for i in range(n):
    inp[i] = inp[i] * (i+1)
print(*inp)