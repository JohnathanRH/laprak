#include <stdio.h>

int main() {
    float a[6];
    scanf("%f %f %f %f %f %f",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    
    float cal = (a[0] - a[1]) * ((float)a[2] / a[3]) - (a[4] + a[5]);
    
    printf("%.3f\n", cal);
    return 0;
}
