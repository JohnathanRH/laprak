arr = [0, 10, 19, 99]
charr = ["Satuan", "Belasan", "Puluhan"]
charDipilih = ''
nilai = int(input())

if nilai == 0:
    print("Nol");
elif nilai == 10:
    print("Puluhan")
elif nilai >= 100:
    print("Anda Menginput Melebihi Limit Bilangan");
else:
    
    for i in range(len(arr) - 1):
        if arr[i] <= nilai <= arr[i + 1]:
            print(charr[i])
            break