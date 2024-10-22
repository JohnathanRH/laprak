#include <stdio.h>

int main()
{
    int army, heroes, avg;
    army = 958730;
    heroes = 5;
    avg = army/heroes;
    
    printf("Jumlah pasukan yang dibawa Yu Zhong = %i\n", army);
    printf("Jumlah pahlawan = %i\n", heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %i pasukan", avg);
    return 0;
}