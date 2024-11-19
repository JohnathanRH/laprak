arr = [100, 80, 70, 60, 50, 0]
charr = ['A', 'B', 'C', 'D', 'E']
charDipilih = ''
nilai = int(input())

for i in range(len(arr) - 1):
    if arr[i] >= nilai >= arr[i + 1]:
        charDipilih = charr[i]
        print(charDipilih)
        break