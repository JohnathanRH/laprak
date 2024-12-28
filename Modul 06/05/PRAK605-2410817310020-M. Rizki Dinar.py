import numpy as np
n = int(input())

def fill():
    array = []
    while len(array) < n*n:
        array.extend(list(map(int, input().split())))
    return np.asarray(np.array_split(np.array(array), n))

print("Matriks A")
arr = fill()
print("Matriks B")
arr2 = fill()
print()

new_arr = [[0]*n for _ in range(n)]
for i in range(n):
    for j in range(n):
        elm = sum(arr[i,:]*arr2[:,j])
        new_arr[i][j] = elm
    print(*new_arr[i])