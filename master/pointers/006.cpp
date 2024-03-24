#include <stdio.h>
#include <stdlib.h>

void getMemory(char** pptr)
{
    *pptr = (char*) malloc(sizeof(char));
    // %p : pointer value
    printf(" pptr = %p\n", pptr);
    printf("*pptr = %p\n", *pptr);
}

int main()
{
    char* ptr = NULL;
    getMemory(&ptr);
    printf(" &ptr = %p\n", &ptr);
    printf("  ptr = %p\n", ptr);
    
    return 0;
}