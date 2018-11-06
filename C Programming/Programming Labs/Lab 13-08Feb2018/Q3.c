/*
Function: Calculate the highest of 3 numbers
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
//prototype
int highest(int[]);

int main()
{
    int i;
    int num[SIZE]={0};
    float highest;
    printf("Please enter 3 numbers\n\n");

    for(i=0;i<SIZE;i++)
    {
        printf("Please enter a number\n");
        scanf("%d", &num[i]);
    }
    printf("The numbers you entered were %d, %d and %d\n", num[0],num[1],num[2]);

    highest = avg(num);

    printf("The highest of the three numbers is %d\n", );
    printf("The lowest of the three numbers is %d\n", );

	return 0;
}	//end main()

//implementing highest()

int highest(int num[])
{
    int sum=0;
    int highest=0;
    int i;
    int lowest=0;

    for(i=0;i<SIZE;i++)
    {
        sum=sum+num[i];
    } //end for

    printf("\nThe sum of the numbers is %d\n", sum);

    if(num[0]>num[1])
    {
        highest=num[0];
        lowest=num[1];
    }
    else
    {
        highest=num[1];
        lowest=num[0];
    }

    if(num[2]>highest)
    {
        highest=num[2];
    }
    else
    {
        lowest=num[2];
    }
}
