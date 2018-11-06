/*
Function:passing a 2-d array to a function
Author: Scott Donnelly
Date: 07/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototype
int sum_array(int[][2]);

int main()
{
    fxn(&sum);
    sum(my_array);
    int my_array[3][2] = {2,4,
                          6,8,
                          10,12
                         };
    int sum = 0;
    sum = sum_array(my_array);
    printf("Sum of array is %d", sum);

	return 0;
}	//end main()

//Implement sum_array()

int sum_array(int param_array[][2])
{
    int i,j;
    int sum_local=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            sum_local = sum_local + param_array[i][j];
        } //end inner for
    } //end outer for

    return sum_local;
}
