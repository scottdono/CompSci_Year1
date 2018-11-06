/*
Function: Calculate the average of 3 numbers
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
//prototype
float avg(int[]);

int main()
{
    int i;
    int num[SIZE]={0};
    float average;
    printf("Please enter 3 numbers\n\n");

    for(i=0;i<SIZE;i++)
    {
        printf("Please enter a number\n");
        scanf("%d", &num[i]);
    }
    printf("The numbers you entered were %d, %d and %d\n", num[0],num[1],num[2]);

    average = (float)avg(num);
    printf("The average of the three numbers is %.2f\n", average);

	return 0;
}	//end main()

//implementing avg()

float avg(int num[])
{
    int sum=0;
    float avg=0;
    int i;

    for(i=0;i<SIZE;i++)
    {
        sum=sum+num[i];
    } //end for

    printf("\nThe sum of the numbers is %d\n", sum);

    avg = (float)sum/SIZE; //calculating average

    return avg; //returning back to main()

} //end function

