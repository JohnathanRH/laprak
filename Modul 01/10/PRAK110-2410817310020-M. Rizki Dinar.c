#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, luas, keliling;
    a = 12;
    b = 5;
    c = sqrt(a*a + b*b);
    luas = 0.5*b*a;
    keliling = a+b+c;
    printf("Diketahui :\n");
    printf("Alas = 5 cm\n");
    printf("Tinggi = 12 cm\n\n\n");
    printf("Jawab :\n");
    printf("Sisi A = %i cm\n", a);
    printf("Sisi B = %i cm\n", b);
    printf("Sisi C = %i cm\n", c);
    printf("Keliling = %i cm\n", keliling);
    printf("Luas = %i cm\n", luas);
    return 0;
}
