#include <stdio.h>
#include <string.h>
int main(){
    char key[50], msg[50];
    int Asterisk, Hash;
    fgets(key,30, stdin);
    fgets(msg,30, stdin);
    int l = strlen(key);
    if (strlen(key) != strlen(msg)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    
    for(int i = 0; i<strlen(key)-1; i++){
        if(msg[i] == ' ' && key[i] == ' '){continue;}
        if(msg[i] == key[i]){
            Asterisk++;
            printf("*");
        }
        else{
            Hash++;
            printf("#");
        }
    }
    printf("\n* = %d\n# = %d\n", Asterisk, Hash);
    if (Asterisk >= Hash) {printf("Pesan Asli\n");}
    else {printf("Pesan Palsu\n");}
    return 0;
}
