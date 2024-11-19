#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    if (n == 0) {
        printf("nol\n");
    }
    if (n > 0) {
        printf("positif\n");
    }
    if (n < 0) {
        printf("negatif\n");
    }

    return 0;
}
