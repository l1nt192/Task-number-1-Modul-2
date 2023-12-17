#include <stdio.h>
#include "func.h"

int main() 
{
    char str[100]="gifjd j gdingi jdgjdi  fgdkl";
    int wordCount = countWords(str);
    printf("%d", wordCount);

    return 0;
}