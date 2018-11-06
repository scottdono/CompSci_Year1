/* Function: To find out what a piece of code does
Author: Scott Donnelly
Date: 06/11/17
*/

#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int i;
    
    for (i = 0; i < 10; i++)
    {
        a[i] = 9 - i;
        printf("%d", i);
    }
    
    for (i = 0; i < 10; i++)
    {
        a[i] = a[ a[i] ];
    }
    
    return 0;
}
    