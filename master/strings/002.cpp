#include <iostream>

void swap(char* a, char* b)
{
    if (a == b) return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void reverseString(char *str, int strLen)
{
    int i = 0, j = strLen - 1;
    
    while (i < j)
    {
        swap(str+i, str+j);
        i++, j--;
    }
    return;
}