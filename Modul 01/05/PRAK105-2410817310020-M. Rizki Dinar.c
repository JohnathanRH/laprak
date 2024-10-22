#include <stdio.h>

int main()
{
    int a, b, x, y, out;
    a = 9;
    b = 5;
    x = 8;
    y = 8;
    out = (a%b) + (x%y);
    
    printf("Variabel a bernilai %i\n", a);
    printf("Variabel b bernilai %i\n", b);
    printf("Variabel x bernilai %i\n", x);
    printf("Variabel y bernilai %i\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %i",out);
    return 0;
}
