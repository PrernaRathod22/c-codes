// Write a C Program to demonstrate use of feof() and ferror() function
#include <stdio.h>
#include <conio.h>
main()
{
    FILE *fp;
    char read[20];
    fp = fopen("text", "r");
    fgets(read, 15, fp);
    printf("Data read is %s", read);
    if (feof(fp) != 0)
    {
        printf("\nEnd of file");
    }
    if (ferror(fp) == 0)
    {
        printf("\nread succcess");
    }
    fclose(fp);

    getch();
}