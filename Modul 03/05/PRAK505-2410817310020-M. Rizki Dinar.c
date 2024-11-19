#include <stdio.h>

int main() {
    int day[2] = {0, 0};
    int hour[2] = {0, 0};
    int minute[2] = {0, 0};
    int sec;

    scanf("%d", &sec);

    if (sec >= 86400) {
        day[1] = sec - (sec % 86400);
        day[0] = day[1] / 86400;
        sec -= day[1];
        printf("%d Hari ", day[0]);
    }

    if (sec >= 3600) {
        hour[1] = sec - (sec % 3600);
        hour[0] = hour[1] / 3600;
        sec -= hour[1];
    }

    if (sec >= 60) {
        minute[1] = sec - (sec % 60);
        minute[0] = minute[1] / 60;
        sec -= minute[1];
    }

    char hour_str[3], minute_str[3], sec_str[3];
    snprintf(hour_str, sizeof(hour_str), "%02d", hour[0]);
    snprintf(minute_str, sizeof(minute_str), "%02d", minute[0]);
    snprintf(sec_str, sizeof(sec_str), "%02d", sec);

    printf("%s:%s:%s\n", hour_str, minute_str, sec_str);

    return 0;
}
