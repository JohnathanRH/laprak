out = 0
words = ["penjumlahan","pengurangan","perkalian","pembagian"]

print("Pilih program")
print("1. Penjumlahan")
print("2. Pengurangan")
print("3. Perkalian")
print("4. Pembagian")
print("5. Exit")
ch = input("Masukkan Pilihan : ")
if(ch == "5"):
    print("Terimakasih, telah menggunakan kalkulator MRIZKIDINAR")
    exit()
elif(int(ch) < 1 or int(ch) > 5):
    print("input anda salah, silahkan coba lagi")
    exit()
fst = float(input("Masukkan nilai pertama : "))
scd = float(input("Masukkan nilai kedua : "))

match ch:
    case "1":out = fst + scd
    case "2":out = fst - scd
    case "3":out = fst * scd
    case "4":out = fst / scd
print(f"Hasil {words[int(ch)-1]} antara {fst:.2f} dan {scd:.2f} adalah {out:.2f}")