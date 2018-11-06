/* Function: To show how to initialise two 3x4 arrays
Author: Scott Donnelly
Date: 13/11/17
*/

#include <stdio.h>

#define ROW 6
#define COL 4

int main()
{
    int data[ROW][COL] = { 
                     3, 2, 5, 7, 4, 2,
                     1, 4, 4, 8, 13, 1,
                     9, 1, 0, 2, 3, 5,
                     0, 2, 6, 3, -1, -8
                   };
    // declare the sum
    int i, j;


    // compute the sum
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COL; j++)
        {
            // calculate the sum here
        }
    }
    // display the sum
    printf( .. );