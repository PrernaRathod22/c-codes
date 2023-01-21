#include <stdio.h>
#include <stdlib.h>
enum
{
    SUCCESS,
    FAIL,
    MAX_LEN = 120
};

void PtrSeek(FILE *fptr);

long PtrTell(FILE *fptr);
void DataRead(FILE *fptr);
int ErrorMsg(char *str);
int main(void)
{

    FILE *fptr;
    char filename[] = "c:\\Temp\\tesseven.txt";
    int reval = SUCCESS;
    if ((fptr = fopen(filename, "r")) == NULL)
    {
        reval = ErrorMsg(filename);
    }
    else
    {

        PtrSeek(fptr);
        if (fclose(fptr) == 0)
            printf("%s successfully closed.\n", filename);
    }
    return reval;
}
void PtrSeek(FILE *fptr)
{

    long offset1, offset2, offset3, offset4;
    offset1 = PtrTell(fptr);
    DataRead(fptr);
    offset2 = PtrTell(fptr);
    DataRead(fptr);
    offset3 = PtrTell(fptr);
    DataRead(fptr);
    offset4 = PtrTell(fptr);

    DataRead(fptr);
    printf("\nReread the tesseven.txt, in random order:\n");
    fseek(fptr, offset2, SEEK_SET);
    DataRead(fptr);
    fseek(fptr, offset1, SEEK_SET);
    DataRead(fptr);
    fseek(fptr, offset4, SEEK_SET);
    DataRead(fptr);
    fseek(fptr, offset3, SEEK_SET);
    DataRead(fptr);
}
long PtrTell(FILE *fptr)
{
    long reval;
    reval = ftell(fptr);
    printf("The fptr is at %ld\n", reval);
    return reval;
}
void DataRead(FILE *fptr)
{
    char buff[MAX_LEN];
    fgets(buff, MAX_LEN, fptr);
    printf("-->%s\n", buff);
}
int ErrorMsg(char *str)
{
    printf("Problem, cannot open %s.\n", str);
    return FAIL;
}