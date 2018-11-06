/*
Function: Passing an array to a function (uses pass by reference)
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//prototype
float calc_avg(int[]);

int main()
{
    int numbers[SIZE];
    float avg=0;
    int i;

    printf("Enter %d numbers\n", SIZE);

    //enter data
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&numbers[i]); //user enters numbers
    }

    //call calc_avg()
    avg=calc_avg(numbers); //assigning the value received from the function into a variable

    printf("\nThe average of the array is %.1f\n", avg);
    printf("\nFunction called successfully\n");

	return 0;
}	//end main()

/* Implementing calc_avg()
*/

float calc_avg(int numbers[])
{
    int sum=0;
    float avg=0;
    int i;

    for(i=0;i<SIZE;i++)
    {
        sum=sum+numbers[i];
    } //end for

    printf("The sum is the numbers is %d\n", sum);

    avg = (float)sum/SIZE; //calculating average

    return avg; //returning back to main()

} //end function
