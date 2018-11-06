/*
Function: Lab 2: Use a function to display the highest and lowest of three numbers
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
// prototype

void highlow(int, int, int);


int main()
{
    int num1, num2, num3;

    printf("Please enter a value for num1\n");
    scanf("%d",&num1);

    printf("Please enter a value for num2\n");
    scanf("%d",&num2);

    printf("Please enter a value for num3\n");
    scanf("%d",&num3);

    //calling function
    highlow(num1, num2, num3);

    printf("\nFunction called successfully");

	return 0;
}	//end main()

// Implementing highlow()

void highlow(int num1, int num2, int num3)
{
    int highest=0;
    int lowest=0;

    if(num1>num2)
    {
        highest=num1;
        lowest=num2;
    }
    else
    {
        highest=num2;
        lowest=num1;
    }

    if(num3>highest)
    {
        highest=num3;
    }
    else
    {
        lowest=num3;
    }

    printf("The highest number is %d\n", highest);
    printf("The lowest number is %d\n", lowest);
}
