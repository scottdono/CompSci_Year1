/*
Function:
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(int *x,int *y);
void selection_sort(int* my_array);
void display(int my_array[]);

void main()
{

    int my_array[SIZE] = {8,5,2,3,1,6,9,4,0,7};

    int i;
    printf("The array before sorting:\n");
    display(my_array);

    selection_sort(my_array);

    printf("The array after sorting:\n");
    display(my_array);
}

/*
    swap two integers
*/
void swap(int *x,int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
/*
    perform selection sort
*/
void selection_sort(int* my_array)
{
    int i, j, min;

    for (i = 0; i < SIZE - 1; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (my_array[j] < my_array[min])
            {
                min = j;
            }
        }

        swap(&my_array[i], &my_array[min]);
    }
}

//Implementing display
void display(int my_array[])
{
    int i;
    for(i=0; i<SIZE; i++)
        printf("%d ",my_array[i]);
    printf("\n");
}

