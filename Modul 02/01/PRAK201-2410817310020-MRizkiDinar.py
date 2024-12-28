import os

def cls():
    os.system('cls' if os.name=='nt' else 'clear')

arr = [
    ["Nama                      :", 0],
    ["NIM                       :", 0],
    ["Kelas Paralel             :", 0],
    ["Tempat/Tanggal Lahir      :", 0],
    ["Alamat                    :", 0],
    ["Hobby                     :", 0],
    ["No. HP                    :", 0]
]
for i in range(len(arr)):
    arr[i][1] = input(arr[i][0])
cls()
for i in range(len(arr)):
    print(arr[i][0] + arr[i][1])