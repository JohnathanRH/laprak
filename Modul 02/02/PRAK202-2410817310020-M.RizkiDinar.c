#include <stdio.h>
#include <math.h>

int main() {
    float a,b;
    
    printf("Masukan nilai pertama : ");
    scanf("%g", &a);
    printf("Masukan nilai kedua : ");
    scanf("%g", &b);
    
    float sum = a + b;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", a, b, sum);

    return 0;
}