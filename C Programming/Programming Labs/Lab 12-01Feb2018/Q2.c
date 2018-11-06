/*
Function: Lab 2: Write a function with 2 parameters
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototype

void dp();

int main()
{
    //calling function void dp()
    dp();

    printf("\nFunction called successfully");
	return 0;
}	//end main()

/* Implementing void dp()
*/

void dp()
{
    char dollar='$';
    int amount=0;
    int i;

    printf("Please enter how many characters you would like?\n");
    scanf("%d", &amount);

    for(i=0;i<amount;i++)
    {
        printf("%c", dollar);
    }

}
