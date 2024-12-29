#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int arr[] = {a,b,c,d};
    int maxNow = arr[0];
    for (int i = 0; i < 4; i++) {
        if (arr[i] > maxNow) {
            maxNow = arr[i];
        }
    }
    return maxNow;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}
