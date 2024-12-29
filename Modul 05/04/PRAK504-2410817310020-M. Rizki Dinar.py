import math
from decimal import Decimal, getcontext
getcontext().prec = 1

def reverse(val):
    subs = 1
    clean = 0
    multiplier = 1
    for i in range(len(str(val))):
        multiplier *= 10
    
    while subs >= 1:
        subs = math.floor(val/10)
        dirt = float(Decimal(str(val/10)) - Decimal(subs)) * multiplier
        clean += math.floor(dirt)
        multiplier /= 10
        val = subs
    return clean

A,B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A+B
print(reverse(C))