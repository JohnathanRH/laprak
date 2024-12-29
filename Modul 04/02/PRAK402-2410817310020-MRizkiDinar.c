#include <stdio.h>
int main() {
    int mxm;
    scanf("%d", &mxm);
    for (int i = 0; i <= mxm; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = mxm; i >= 0; i--) {
        if (i != 0 && i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
