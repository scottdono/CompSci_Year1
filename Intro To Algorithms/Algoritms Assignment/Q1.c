/*
Function:
Author: Scott Donnelly
Date: 02/04/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  //Array size can be changed outside of runtime. This program doesn't use DMA
#define PAIR 2

int cmpfunc (const void * a, const void * b); //This is a necessary function for qsort in C
void display(int list[]); //function to display contents of the array
void pair(int list[]); //determine the farthest pair

int main()
{
    int list[SIZE];
    int i;

    //place numbers into the list
    printf("Please enter %d numbers into the array\n", SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &*(list+i));
        fflush(stdin);
    }

    printf("The list before sorting is: ");
    display(list);

    //sort the list using quicksort algorithm
    qsort(list, SIZE, sizeof(int), cmpfunc);

    printf("\nThe list after sorting is: ");
    display(list);

    pair(list); //call the function to display the farthest pair based on the sorted list

    return 0;
} //end main()

//Implementing cmpfunc() for the qsort function
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

//implementing display()
void display(int list[])
{
    int i;
    for(i=0;i<SIZE-1;i++)
    {
        printf("%d, ", *(list+i));
    }
    printf("%d.\n", *(list+i)); //seperate printf for the last number for a full stop
}

//implementing pair()
void pair(int list[])
{
    int furthest_pair[PAIR]={0};
    int i;

    furthest_pair[0] = list[0];
    furthest_pair[1] = list[SIZE-1];

    printf("\nThe furthest pair in the array is: ");

    for(i=0;i<PAIR-1;i++)
    {
        printf("[ %d,", *(furthest_pair+i));
    }
    printf(" %d ]\n", *(furthest_pair+i));
}
