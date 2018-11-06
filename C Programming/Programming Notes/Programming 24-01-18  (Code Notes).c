/*
Function: Program that uses a function.
Author: Scott Donnelly
Date: 24/01/2018

Compiler used: CodeBlocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototype
void stars(int);

int main()
{
    int answer=0;

    printf("Before function call\n\n");

    printf("How many stars would you like?\n");
    scanf("%d", &answer);

    //call function
    stars(answer);

    printf("\n\nAfter function call");

    return 0;

} //end main()

//Implement stars()

void stars()
{
    int i;

    for(i=0;i<answer;i++)
    {
        printf("*")
    } //end for

} //end stars()
