#include <stdio.h>
#include <stdlib.h> // for exit() function

int main()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("studytonight.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    // read the text until newline
    fscanf(fptr, "%[^\n]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}