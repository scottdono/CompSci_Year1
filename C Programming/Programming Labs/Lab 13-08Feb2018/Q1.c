/*
Function: Check if a number is even or odd
Author: Scott Donnelly
Date: 08/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototype
int even_odd(int);

int main()
{
    int input;
    int answer=0;

    printf("Please enter a number and this program will determine whether it is an even or odd number\n");
    scanf("%d", &input); //ask the user for input

    answer = even_odd(input); //calling function
    if(answer==0)
    {
        printf("The number entered was even\n");
    }
    else
    {
        printf("The number entered was odd\n");
    }

	return 0;
}	//end main()

//Implementing even_odd()

int even_odd(int input)
{
    int even=0;
    int odd=1;

    if((input%2)==0) //calculate if the numbers are even or odd
    {
        return even;
    }
    else
    {
        return odd;
    }

}

