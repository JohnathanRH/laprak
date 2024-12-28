import math
x = []

while len(x)<2:
    x.extend(list(map(int, input().split())))

a_sqr = x[0]*x[0]
b_sqr = x[1]*x[1]

c = round(math.sqrt(b_sqr-a_sqr))
cir = x[0]+x[1]+c
are = round(0.5*c*x[0])

print("Alas = "+str(c)+" cm")
print("Tinggi ="+str(x[0])+" cm")
print("Keliling = "+str(cir)+" cm")
print("Luas = "+str(are)+" cm^2")