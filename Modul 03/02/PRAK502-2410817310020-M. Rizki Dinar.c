#include <stdio.h>

int main()
{
    int arr[] = {100,80,70,60,50,0};
    char charr[] = {'A', 'B', 'C', 'D', 'E'};
    char charDipilih;
    int nilai = 0;
    scanf("%i", &nilai);
    for(int i=0; i < sizeof(arr); i++)
    {
        if (nilai <= arr[i] && nilai >= arr[i+1]){
            charDipilih = charr[i];
            printf("%C\n", charDipilih);
            break;
        }
    }
    
    return 0;
}
