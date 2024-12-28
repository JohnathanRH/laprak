#include <stdio.h>

int fill(int arr[], int lim){
    for(int i = 0; i<lim; i++){
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    int arr[2][n1];
    if(n1 != n2){
        printf("Jumlah tidak sama");
        return 0;
    }
    fill(arr[0], n1);
    fill(arr[1], n1);
    for(int i = 0; i<n1; i++){
        arr[1][i] *= arr[0][i];
        printf("%d ", arr[1][i]);
    }
    return 0;
}
