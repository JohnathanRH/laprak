x, y = map(int, input().split())
modifier = 1

if y > x:
    modifier = -1

rang = abs(x-y)+1
for i in range(rang):
    print(x, y, end = "")
    x -= modifier
    y += modifier
    if i != rang-1:
        print(" - ", end = "")