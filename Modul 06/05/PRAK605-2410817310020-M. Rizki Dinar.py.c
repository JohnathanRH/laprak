#include <stdio.h>

void fill(int n, int matrix[n][n]) {
    int value;
    int count = 0;
    while (count < n * n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &value);
                matrix[i][j] = value;
                count++;
            }
        }
    }
}

void multiply(int n, int matA[n][n], int matB[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0; // Initialize the element
            for (int k = 0; k < n; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int matA[n][n], matB[n][n], result[n][n];
    printf("Matriks A\n");
    fill(n, matA);
    printf("Matriks B\n");
    fill(n, matB);
    printf("\n");
    multiply(n, matA, matB, result);

    printMatrix(n, result);

    return 0;
}