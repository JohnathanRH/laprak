#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int reverse(int val){
    double dirt;
    int clean = 0;
    int subs = 1;
    int multiplier = 1;
    
    int digit = floor(log10(abs(val)))+1;
    for(int i = 0; i < digit; i++){
        multiplier *= 10;
    }
    
    while(subs >= 1){
        subs = floor(val/10);
        dirt = ((double)val/10 - subs) * multiplier;
        clean += round(dirt);
        multiplier /= 10;
        val = subs;
    }
    return clean;
}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
    return 0;
}