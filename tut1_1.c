// calculate sum of all elements in an array using pointers.

#include <stdio.h>
int main()
{
   int array[5];
   int i, sum = 0;
   int *ptr;

   printf("Enter your 5 integer array elements :\n");
   for (i = 0; i < 5; i++)
      scanf("%d", &array[i]);

   ptr = array;

   for (i = 0; i < 5; i++)
   {
      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d", sum);
}
