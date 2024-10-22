#include <stdio.h>
#include <math.h>
int main()
{
    int lap, lgth;
    float perlap, r;
    lap = 5;
    lgth = 14;
    perlap = (float) 14/5;
    r = (round((perlap/2/3.14)*100))/100;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %i putaran\n", lap);
    printf("Jarak tempuh Pak Dengklek = %i Kilometer\n\n\n", lgth);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
    
    return 0;
}
