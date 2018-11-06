/*
Function: Algorithms lab 5
Author: Scott Donnelly
Date: 27/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

//prototype
void bubbleSort(int[], int, int);

int main()
{

    int odd_array[10];
    int even_array[10];
    int output_array[20];
    int N1, N2;

    clock_t start, end;
    double runtime;

    int i=0;
    int j=0;
    int k=0;

    printf("How many elements are in the first array?\n");
    scanf(" %d",&N1);
    fflush(stdin);

    printf("Please enter in values for the first array\n");

    for(i=0;i<N1;i++)
    {
        scanf(" %d", &*(odd_array+i));
        fflush(stdin);
    }

    printf("How many elements are in the second array?\n");
    scanf(" %d",&N2);
    fflush(stdin);

    printf("Please enter in values for the second array\n");

    for(i=0;i<N2;i++)
    {
        scanf(" %d", &*(even_array+i));
        fflush(stdin);
    }


    i=0;
    j=0;
    k=0;

    start = clock();

    // Merging starts
    while (i < N1 && j < N2)
    {
        if (odd_array[i] <= even_array[j])
        {
            output_array[k] = odd_array[i];
            i++;
            k++;
        }
        else
        {
             output_array[k] = even_array[j];
             k++;
             j++;
        }
    }

        /* Some elements in array 'odd_array' are still remaining
        where as the array 'even_array' is exhausted */

    while (i < N1)
    {
        output_array[k] = odd_array[i];
        i++;
        k++;
    }

         /* Some elements in array 'even_array' are still remaining
         where as the array 'odd_array' is exhausted */

    while (j < N2)
    {
        output_array[k] = even_array[j];
        k++;
        j++;
    }


    bubbleSort(output_array, N1, N2);

    end = clock();
    runtime = ((double) (end - start));

    printf("\nThe runtime of the program is %.1f seconds\n", runtime);

 return (0);

}


//implementing bubbleSort()
void bubbleSort(int output_array[20], int N1, int N2)
{

    int i,j;
    int swap=0;

    for (i=0;i<(SIZE-1);i++)
        {
            for(j=0;j<SIZE-i-1;j++)
            {
                if(output_array[j]>output_array[j+1]) // For decreasing order use <
                {
                    swap = output_array[j];
                    output_array[j] = output_array[j+1];
                    output_array[j+1] = swap;
                }
            }
        }

         printf("Sorted list in ascending order:");
        for(i=0;i<(N1+N2)-1;i++)
        {
            printf(" %d,",(output_array[i]));
        }
        printf(" %d.\n", (output_array[i]));
}
