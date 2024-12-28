#include <stdio.h>

int main()
{
    float r, h;
    float pi = 22.0/7.0;
    scanf("%f %f", &r, &h);
    
    float vol = (pi*(r*r)*h);
    float are = (2*pi*r*h)+(2*pi*r*r);
    float cir = (2*pi*r);
    
    printf("Volume = %.2f\n", vol);
    printf("Luas = %.2f\n", are);
    printf("Keliling = %.2f\n", cir);
    return 0;
}
