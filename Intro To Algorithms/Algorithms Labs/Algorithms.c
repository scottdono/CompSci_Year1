/*
Function: Write an algorithm in C language
Author: Scott Donnelly
Date: 06/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    double N = 0;
    double sum = 0;
    double i;

    printf("\nPlease enter a value for N\n");
    scanf("%lf", &N);

    clock_t start = clock();

    for(i=1;i<N;i++)
    {
        sum = sum+i;
    }

    /* here, do your time-consuming job */
    clock_t end = clock();
    double time_spent = (double)(end - start) /CLOCKS_PER_SEC;

    printf("\nTime spent = %f", time_spent);
	return 0;
}	//end main()


