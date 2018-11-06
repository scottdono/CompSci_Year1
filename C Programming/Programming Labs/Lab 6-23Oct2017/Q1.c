/*Function: Use an array to read in 5 numbers and copy the numbers into another array
Author: Scott Donnelly
Date: 23/10/17
*/

#include <stdio.h>

int main()
{
    int variables[5];
    int copy[5];
    int i;
    
    printf("Enter 5 numbers\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&variables[i]);
        flushall();
        
        if(i=4)
        {
            copy[5]=variables[5];
            
            printf("\n%d,\n%d,\n%d,\n%d,\n%d", copy[5]);
        }
    }
    
    getchar();
    
    return 0;
    
}