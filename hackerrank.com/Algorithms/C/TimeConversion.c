#include <string.h>
#include <stdlib.h> 

int get_hour_from_string(char* s) {
    char hourString[2];
    strncpy(hourString, s, 2);

    int hour = atoi(hourString);

    return hour;
}

char get_format(char* s) {
    int length = strlen(s);
    int index = length - 2;
    return s[index];
}


char* timeConversion(char* s) {
    int hour = get_hour_from_string(s), newHour = 0;
    char f = get_format(s), hourString[100], s2[100]="0";

    if (f == 'P' && hour < 12)
        newHour = hour + 12;
    else if (f == 'A' && hour >= 12)
        newHour = hour - 12;
    else
        newHour = hour;

    sprintf(hourString, "%d", newHour);

    if (newHour < 10)
        strcat(s2, hourString);
    else
        strcpy(s2, hourString);    

    for (int i = 0; i < strlen(s); i++) {
        if (i < 2) {     
            s[i] = s2[i];
        }
        else if (i > 7)
            s[i] = ' ';
    }
    return s;
}
