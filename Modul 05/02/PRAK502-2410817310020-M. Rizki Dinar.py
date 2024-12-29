def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)
    
def mutlak(angka):
    return abs(angka)

a, b, c, d = map(int, input().split())
hasil = hitung(a, c) + hitung(b, d)
print(mutlak(hasil))