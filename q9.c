

#include <stdio.h>

void reverseStringWordWise(char* str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    // Reverse the whole string
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Reverse each word individually
    int i = 0;
    while (str[i] != '\0') {
        // Find the start and end indices of each word
        while (str[i] == ' ' && str[i] != '\0') {
            i++; // Skip spaces
        }
        start = i;

        while (str[i] != ' ' && str[i] != '\0') {
            i++; // Skip non-space characters
        }
        end = i - 1;

        // Reverse the word
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
}
