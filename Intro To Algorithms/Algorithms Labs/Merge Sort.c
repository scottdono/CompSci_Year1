/*
Function:
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void merge(int my_array[], int tmp[], int left, int mid, int right);
void msort(int my_array[], int tmp[], int left, int right);
void merge_sort(int my_array[], int tmp[]);
void display(int my_array[]);

int main()
{
    int my_array[SIZE] = {5,6,3,1,7,8,2,4};
    int tmp[SIZE];

    printf("--- C Merge Sort Demonstration --- \n");

    printf("Array before sorting:\n");
    display(my_array,SIZE);

    merge_sort(my_array, tmp);

    printf("Array after sorting:\n");
    display(my_array,SIZE);

    return 0;
}

void merge_sort(int my_array[], int tmp[])
{
    msort(a, tmp, 0, SIZE - 1);
}

void msort(int my_array[], int tmp[], int left, int right)
{
    int mid;
    if (right > left)
    {
        mid = (right + left) / 2;
        msort(a, tmp, left, mid);
        msort(a, tmp, mid + 1, right);
        merge(a, tmp, left, mid + 1, right);
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

void display(int my_array[])
{
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d ",my_array[i]);

    printf("\n");
}
