


#include <stdio.h>

int countWords(const char* str) {
    int wordCount = 0;
    int i = 0;
    int isWord = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            isWord = 0;
        } else if (!isWord) {
            isWord = 1;
            wordCount++;
        }
        i++;
    }

    return wordCount;
}
