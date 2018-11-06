/*
Function:
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

void merge(int my_array[], int tmp[], int left, int mid, int right); //merge sort functions
void msort(int my_array[], int tmp[], int left, int right);
void merge_sort(int my_array[], int tmp[]);

void swap(int *x,int *y);               //selection sort functions
void selection_sort(int* my_array);

void display(int my_array[]);   //display function

int cmpfunc(const void * a, const void * b);    //quicksort function

int main()
{

    int my_array[SIZE] = {8,5,2,3,1,6,9,4,0,7};
    int array_copy[SIZE] = {8,5,2,3,1,6,9,4,0,7};
    int tmp[SIZE];
    int choice=0;
    int loop=0;
    int i;

    while(loop==0)
    {
        system("cls");     //clears menu

        printf("\n\n1. Selection Sort\n2. Quick Sort\n3. Merge Sort\n4. Exit the program\n");

        scanf("%d", &choice);
        fflush(stdin);

        switch(choice)    //allows you to choose your sorting algorithm
        {
            case 1:  //The time complexity of selection sort is N^2
            {
                printf("Please enter %d numbers into the array\n", SIZE);

                for(i=0;i<SIZE;i++)   //reset the values in the array
                {
                    scanf("%d", &my_array[i]);
                    fflush(stdin);
                }

                printf("The array before sorting:\n");
                display(my_array);

                selection_sort(my_array);

                printf("The array after sorting:\n");
                display(my_array);
                getch();

                break;
            }

            case 2: //The time complexity of quick sort is NlogN
            {
                printf("Please enter %d numbers into the array\n", SIZE);

                for(i=0;i<SIZE;i++)   //reset the values in the array
                {
                    scanf("%d", &my_array[i]);
                    fflush(stdin);
                }

                printf("The array before sorting:\n");
                display(my_array);

                qsort(my_array, SIZE, sizeof(int), cmpfunc);

                printf("The array after sorting:\n");
                display(my_array);
                getch();

                break;
            }

            case 3: //The time complexity of merge sort is NlogN also
            {
                printf("Please enter %d numbers into the array\n", SIZE);

                for(i=0;i<SIZE;i++)   //reset the values in the array
                {
                    scanf("%d", &my_array[i]);
                    fflush(stdin);
                }

                printf("Array before sorting:\n");
                display(my_array);

                merge_sort(my_array, tmp);

                printf("Array after sorting:\n");
                display(my_array);
                getch();

                break;
            }

            case 4:
            {
                loop=1;
                break;
            }

        }
    }

    return 0;
}

//Implementing swap()
void swap(int *x,int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

//Implementing selection_sort()
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

//Implementing display()
void display(int my_array[])
{
    int i;
    for(i=0; i<SIZE; i++)
        printf("%d ",my_array[i]);
    printf("\n");
}

//Implementing cmpfunc() for the qsort function
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

//Implementing the neccessary functions for merge sort
void merge_sort(int my_array[], int tmp[])
{
    msort(my_array, tmp, 0, SIZE - 1);
}

void msort(int my_array[], int tmp[], int left, int right)
{
    int mid;
    if (right > left)
    {
        mid = (right + left) / 2;
        msort(my_array, tmp, left, mid);
        msort(my_array, tmp, mid + 1, right);
        merge(my_array, tmp, left, mid + 1, right);
    }
}

void merge(int my_array[], int tmp[], int left, int mid, int right)
{
    int i, left_end, count, tmp_pos;
    left_end = mid - 1;
    tmp_pos = left;
    count = right - left + 1;

    while ((left <= left_end) && (mid <= right))
    {
        if (my_array[left] <= my_array[mid])
        {
            tmp[tmp_pos] = my_array[left];
            tmp_pos = tmp_pos + 1;
            left = left +1;
        }
        else
        {
            tmp[tmp_pos] = my_array[mid];
            tmp_pos = tmp_pos + 1;
            mid = mid + 1;
        }
    }

    while (left <= left_end)
    {
        tmp[tmp_pos] = my_array[left];
        left = left + 1;
        tmp_pos = tmp_pos + 1;
    }
    while (mid <= right)
    {
        tmp[tmp_pos] = my_array[mid];
        mid = mid + 1;
        tmp_pos = tmp_pos + 1;
    }

    for (i = 0; i <= count; i++)
    {
        my_array[right] = tmp[right];
        right = right - 1;
    }
}

