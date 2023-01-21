// Write a C program to demonstrate the use of realloc() function.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    ptr = NULL;
    ptr = realloc(ptr, 10);
    if (ptr != NULL)
        printf("Memory created successfully\n");

    return 0;
}
