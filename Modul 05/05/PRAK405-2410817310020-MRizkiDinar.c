#include <stdio.h>

int main() {
    int val, mult, row = 0, SUM = 0;
    scanf("%d %d", &val, &mult);
    
    for (int i = 2; i < val + 2; i++) {
        for (int j = i - 1; j >= 1; j--) {
            row += (j * mult);
            printf("(%d * %d)", j, mult);
            if (j == 1) {
                printf(" = ");
            } else {
                printf(" + ");
            }
        }
        printf("%d\n", row);
        SUM += row;
        row = 0;
    }
    printf("%d\n", SUM);
    
    return 0;
}
