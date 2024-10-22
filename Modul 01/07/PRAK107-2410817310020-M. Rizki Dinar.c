#include <stdio.h>

int main()
{
    
    int a, b, c, keliling, harga, out;
    a = 4; 
    b = 5;
    c = 7;
    keliling = a+b+c;
    harga = 85000;  // harga per m
    out = keliling*harga;
    
    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %i, %i, dan %i\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %i\n", keliling);
    printf("Harga tanah Per Meter adalah %i\n", harga);
    printf("Jawaban:\nBiaya yang diperlukan Pak Dengklek adalah %i", out);
    

    return 0;
}
