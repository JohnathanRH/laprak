#include <stdio.h>

int main() {
    int arr[] = {0, 10, 19, 99};
    char *charr[] = {"Satuan", "Belasan", "Puluhan"};
    char *charDipilih = "";
    int nilai, arr_size;
    
    arr_size = (sizeof(arr) / sizeof(arr[0]) - 1);

    scanf("%d", &nilai);

    if (nilai == 0) {
        printf("Nol\n");
    } else if (nilai == 10) {
        printf("Puluhan\n");
    } else if (nilai >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else {
        for (int i = 0; i < arr_size; i++) {
            if (nilai >= arr[i] && nilai <= arr[i + 1]) {
                printf("%s\n", charr[i]);
                break;
            }
        }
    }

    return 0;
}
