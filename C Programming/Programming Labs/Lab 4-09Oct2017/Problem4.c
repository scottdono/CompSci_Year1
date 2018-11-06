/* Program Function: Marital status problem
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    int first=0;
    int second=0;
    int output;
    
    printf("Please enter in two numbers to see if they can divide into each other\n");
    
    scanf("%d", &first);
    flushall();
    scanf("%d", &second);
    flushall();
    
    output=(first%second);
    
    switch(output)
    {
        case 1:
        {
            printf("%d is not divible by %d", first, second);
            break;
        }
        case 0:
        {
            printf("%d is divisible by %d", first, second);
            break;
        }
        default:
        {
            printf("Please restart the program and try again");
            break;
        }
    }
    
    getchar();
    
    return 0;
}
            