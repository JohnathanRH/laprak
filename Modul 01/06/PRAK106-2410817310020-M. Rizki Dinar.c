#include <stdio.h>

int main()
{
    int a, b ,c;
    a = 4;
    b = 8;
    c = 3;
    
    printf("Variabel a bernilai %i\n", a);
    printf("Variabel b bernilai %i\n", b);
    printf("Variabel c bernilai %i\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %i\n", a==b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %i\n", b>c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %i\n", a!=c);
    return 0;
}
