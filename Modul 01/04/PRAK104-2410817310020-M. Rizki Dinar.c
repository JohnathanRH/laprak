#include <stdio.h>

int main()
{
    int a, b, arrest, beres;
    float ad, bd;
    a = 400000;         b = 350000;
    ad = 0.13;          bd = 0.21;
    arrest = a-(a*ad);  beres = b - (b*bd);
    
    printf("Harga sepatu A adalah %i\n", a);
    printf("Harga sepatu B adalah %i\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %i\n",arrest);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %i",beres);
    return 0;
}
