


#include <stdio.h>

int isPalindrome(const char* str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}
