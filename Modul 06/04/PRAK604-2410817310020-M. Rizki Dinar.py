key = list(input())
msg = list(input())
Asterisk = 0
Hash = 0
if len(key) != len(msg):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

for i in range(len(key)):
    if msg[i] == ' ' and key[i] == ' ':continue
    if msg[i] == key[i] and msg[i].isupper() == key[i].isupper():
        Asterisk += 1
        print('*',end="")
    else:
        Hash+=1
        print('#',end="")
print('\n* =',Asterisk,"\n# =",Hash)
if Asterisk >= Hash: print("Pesan Asli")
else: print("Pesan Palsu")