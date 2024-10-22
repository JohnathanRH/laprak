#include <stdio.h>

int main()
{
    int a,b,x,y;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    float eq = (float) (a+b)*x/y;
    printf("Variabel a bernilai %i\n", a);
    printf("Variabel b bernilai %i\n", b);
    printf("Variabel x bernilai %i\n", x);
    printf("Variabel y bernilai %i\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f",eq);
    return 0;
}