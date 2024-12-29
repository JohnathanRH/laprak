#include <stdio.h>

int main()
{
    int arr[3];
    int arr_size, current_least, least_idx, temp;
    arr_size= sizeof(arr) / sizeof(arr[0]);
    
    scanf("%i %i %i", &arr[0], &arr[1], &arr[2]);
    for(int i = 0; i<arr_size; i++)
    {
        current_least = arr[i];
        for(int j = i; j<arr_size; j++)
        {
            if(arr[j] <= current_least){
                current_least = arr[j];
                least_idx = j;
            }
        }
        arr[least_idx] = arr[i];
        arr[i] = current_least;
        printf("%i ",arr[i]);
    }
    return 0;
}
