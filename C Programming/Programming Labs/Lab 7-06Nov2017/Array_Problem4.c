/* Function: Input numbers into two separate 1D arrays
Author: Scott Donnelly
Date: 06/11/17
*/

#include <stdio.h>
#define ELEMENTS 5

int main()
{
    int A[ELEMENTS];
    int Z[ELEMENTS];
    int i;
    
    //input elements into the array
    
    printf("Please enter 5 numbers for the first array\n");
    for(i=0;i<ELEMENTS;i++)
    {
        scanf("%d", &A[i]);
        flushall();

    }
    
    printf("Please enter 5 numbers for the second array\n");
    for(i=0;i<ELEMENTS;i++)
    {
        scanf("%d", &Z[i]);
        flushall();
    }
    
    //displaying the multiples of the elements from each array
    
    for(i=1;i<=ELEMENTS;i++)
    {
        printf("Multiplication of elements %d from both arrays is %d\n", i,(A[i]*Z[i]));
    }
    getchar();
    return 0;
    
}