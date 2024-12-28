#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[7][2][100] = {
        {"Nama                      :", ""},
        {"NIM                       :", ""},
        {"Kelas Paralel             :", ""},
        {"Tempat/Tanggal Lahir      :", ""},
        {"Alamat                    :", ""},
        {"Hobby                     :", ""},
        {"No. HP                    :", ""}
    };
    for (int i = 0; i < 7; i++) {
        printf("%s ", arr[i][0]);
        scanf(" %[^\n]s", arr[i][1]);
    }
    system("clear");
    for (int i = 0; i < 7; i++) {
        printf("%s %s\n", arr[i][0], arr[i][1]);
    }
    return 0;
}
