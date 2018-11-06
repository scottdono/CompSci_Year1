/*
Function:
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int cmpfunc (const void * a, const void * b); //This is a necessary function for qsort in C

int main()
{
   int array[SIZE];
   int position;
   int i;
   int counter=1;

   printf("Enter %d elements\n", SIZE);

   for(i=0;i<SIZE;i++)
   {
      scanf("%d", &array[i]);
      fflush(stdin);
   }

   //sort the list using quicksort algorithm
   qsort(array, SIZE, sizeof(int), cmpfunc);

   for(i=0;i<SIZE;i++)
   {
       printf("\n%d. %d\n",counter, array[i]);
       counter++;
   }

   printf("\nPlease choose the element number you wish to delete from the array\n");
   scanf("%d", &position);

   if(position>=SIZE+1)
   {
      printf("Deletion not possible.\n");
   }
   else
   {
       counter = 1;

      for(i=position-1;i<SIZE-1;i++)
      {
          array[i] = array[i+1];
      }

      printf("The array now looks like this: \n");

      //sort the list using quicksort algorithm
      qsort(array, SIZE, sizeof(int), cmpfunc);

      for(i=0;i<SIZE-1;i++)
      {
           printf("\n%d. %d\n",counter, array[i]);
           counter++;
      }
   }

   return 0;
}


int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
