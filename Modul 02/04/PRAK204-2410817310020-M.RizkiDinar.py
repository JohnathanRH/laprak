a = []

while len(a) < 2:
    a.extend(list(map(int, input().split())))

r = a[0]
h = a[1]
pi = 22/7

vol = round(pi*(r*r)*h, 2)
are = round((2*pi*r*h)+2*pi*(r*r), 2)
cir = round(2*pi*r, 2)

print("Volume = {:.2f}".format(vol))
print("Luas = {:.2f}".format(are))
print("Keliling = {:.2f}".format(cir))