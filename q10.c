

#include <stdio.h>

char findRepeatedChar(const char* str) {
    int count[256] = {0}; // Assuming ASCII characters

    int i = 0;
    while (str[i] != '\0') {
        count[str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            return (char)i;
        }
    }

    return '\0'; // If no repeated character found
}
