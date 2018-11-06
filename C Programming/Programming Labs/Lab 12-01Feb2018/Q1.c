/*
Function: Lab 2: Write a function to print 10 stars on a single line
Author: Scott Donnelly
Date: 01/02/18

Compiler used: CodeBlocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototype

void stars();

int main()
{
    //call stars function
    stars();

    //Confirm function call
    printf("\n\nstars() called\n");

	return 0;
}	//end main()

/*  Implement void stars()
*/
void stars()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("*");
    }
}
