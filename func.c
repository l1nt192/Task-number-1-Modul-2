#include "func.h"

int countWords(char* str)
{
    int words = 0;
    int isWord = 0;

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            isWord = 0;
        }
        else if (isWord == 0) {
            isWord = 1;
            words++;
        }
        str++;
    }

    return words;
}
