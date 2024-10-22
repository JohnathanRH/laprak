#include <stdio.h>

int main()
{
    int a, b, c;
    a = 4;
    b = 8;
    c = 3;
    float eq = (float) a*b/c;

    printf("Variabel a bernilai %i\n", a);
    printf("Variabel b bernilai %i\n", b);
    printf("Variabel c bernilai %i\n", c);
    printf("Jumlah variabel tersebut adalah %f", eq);
    
    return 0;
}
