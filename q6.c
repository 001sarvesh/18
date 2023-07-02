


#include <stdio.h>

int isAlphanumeric(const char* str) {
    int hasAlphabet = 0;
    int hasDigit = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            hasAlphabet = 1;
        } else if (str[i] >= '0' && str[i] <= '9') {
            hasDigit = 1;
        }
        i++;
    }

    return (hasAlphabet && hasDigit);
}
