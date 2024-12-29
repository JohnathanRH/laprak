def maksimal(a, b):
    if b > a:return b
    else:return a

def minimal(a, b):
    if b > a:return a
    else:return b

maks = -100000
minim = 100000
nilai = []
bilangan = int(input())
while len(nilai) < bilangan:
    nilai.extend(list(map(int, input().split())))
for i in range(len(nilai)):
    maks = maksimal(maks, nilai[i])
    minim = minimal(minim, nilai[i])

print(maks, minim)