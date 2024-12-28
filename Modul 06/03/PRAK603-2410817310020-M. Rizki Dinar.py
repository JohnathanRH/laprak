import numpy as np
n1,n2 = map(int, input().split())
arr = []
if n1 != n2:
    print("Jumlah tidak sama")
    exit()
arr[0] = list(map(int, input().split())
arr[1] = list(map(int, input().split())
arr = np.array(arr)
hasil = arr[0]*arr[1]
print(*hasil)