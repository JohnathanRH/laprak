#include <stdio.h>

int main()
{
    int val, formatter;
    char crt;
    formatter = 20;
    scanf("%d %c", &val, &crt);
    
    for(int i = 1; i <= 50; i++){
        if(i == formatter){
            printf("\n");
            formatter += 20;
        }
        if (i % val == 0){
            printf("%c ", crt);
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}