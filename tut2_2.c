//program to create a file named DATA and read the integer numbers from the user into this DATA file. Create a file named ODD and EVEN. Read the contents from DATA file and if the number is odd, write the content in ODD file and if the number is even, write the content in EVEN file. Display the contents of ODD and EVEN file on the screen.#include <stdio.h>
int main()
{
    FILE *f1, *f2, *f3;
    int number, i;
    printf("Contents of DATA file\n\n");
    f1 = fopen("DATA","w");
    for(i = 1; i <= 30; i++)
    {
        scanf("%d", &number);
        if(number == -1)
            break;
        putw(number,f1);
    }
    fclose(f1);
    f1 = fopen("DATA","r");
    f2 = fopen("ODD", "w");
    f3 = fopen("EVEN", "w");
    while((number = getw(f1)) != EOF)
    {
        if(number %2 == 0)
            putw(number, f3); /* Write to EVEN file */ else
            putw(number, f2); /* Write to ODD file */
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2 = fopen("ODD","r");
    f3 = fopen("EVEN", "r");
    printf("\n Contents of ODD File\n");
    while((number = getw(f2)) != EOF) printf("%4d", number);
    printf("\nContents of EVEN file\n");
    while((number = getw(f3)) != EOF) printf("%4d", number);
    fclose(f2);
    fclose(f3);
    return 0;
}
