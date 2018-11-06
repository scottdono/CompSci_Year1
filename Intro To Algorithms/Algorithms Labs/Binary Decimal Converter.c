/*
Function: Binary Decimal Converter
Author: Scott Donnelly
Date: 13/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 15


int main()
{
    int array[SIZE];
    int input;
    int i;
    printf("Enter the number: ");
    scanf("%d",&input);
    for(i=0;input>0;i++)
    {
        array[i]=input%2;
        input=input/2;
    }
    printf("\nThe binary is: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }
    return 0;
}


