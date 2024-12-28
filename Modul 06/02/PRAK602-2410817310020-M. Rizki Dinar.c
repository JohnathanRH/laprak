#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int inp[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &inp[i]);
        inp[i] *= (i+1);
    }

    for(int i = 0; i<n; i++){
        printf("%d ", inp[i]);
    }
    return 0;
}
