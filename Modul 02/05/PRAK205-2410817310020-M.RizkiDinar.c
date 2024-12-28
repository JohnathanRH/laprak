#include <stdio.h>
#include <math.h>
int main() {
    int x[2] = {0, 0};
    scanf("%d %d", &x[0], &x[1]);
    
    int a_sqr = x[0] * x[0];
    int b_sqr = x[1] * x[1];
    int c = round(sqrt(b_sqr - a_sqr));
    int cir = x[0] + x[1] + c;
    int are = round(0.5 * c * x[0]);

    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", x[0]);
    printf("Keliling = %d cm\n", cir);
    printf("Luas = %d cm^2\n", are);

    return 0;
}
