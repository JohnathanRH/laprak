#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,rang;
    int modifier = 1;
    scanf("%d %d", &x,&y);
    if(y>x){
        modifier = -1;
    }
    rang = abs(x-y);
    for(int i = 0; i<=rang; i++){
        printf("%d %d", x, y);
        x -= modifier;
        y += modifier;
        if(i != rang){
            printf(" - ");}
    }
    return 0;
}