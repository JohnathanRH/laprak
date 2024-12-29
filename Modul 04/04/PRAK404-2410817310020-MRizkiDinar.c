#include <stdio.h>

int main()
{
    float fst, scd, out = 0.0;
    int ch;
    char *words[] = {"penjumlahan", "pengurangan", "perkalian", "pembagian"};

    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan: ");
    
    scanf("%d", &ch);
    if (ch == 5) {
        printf("Terimakasih, telah menggunakan kalkulator MRIZKIDINAR\n");
        return 0;
    } else if (ch < 1 || ch > 5) {
        printf("Input anda salah, silahkan coba lagi\n");
        return 0;
    }

    printf("Masukkan nilai pertama: ");
    scanf("%f", &fst);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &scd);
    
    switch (ch) {
        case 1: out = fst + scd;break;
        case 2: out = fst - scd;break;
        case 3: out = fst * scd;break;
        case 4: out = fst / scd;break;
    }
    printf("Hasil %s antara %.2f dan %.2f adalah %.2f\n", words[ch - 1], fst, scd, out);
    return 0;
}
