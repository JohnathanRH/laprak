#include <stdio.h>
#include <stdlib.h>
int hitung(int nilai1, int nilai2){
    return abs(nilai1-nilai2);
}
int mutlak(int angka){
    return abs(angka);
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int Hasil = hitung(a,c) + hitung(b,d);
    printf("%d",mutlak(Hasil));
    
    return 0;
}