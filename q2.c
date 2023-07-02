// . Write a function to reverse a string.

#include <stdio.h>

void reverseString(char* str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){

    
    return 0;
}