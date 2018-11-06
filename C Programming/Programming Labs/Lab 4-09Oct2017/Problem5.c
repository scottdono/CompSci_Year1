/* Program Function: Triangle problem
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    float sideA=0;
    float sideB=0;
    float sideC=0;
    
    printf("Enter 3 measurements for the sides of a triangle\n");
    scanf("%f", &sideA);
    scanf("%f", &sideB);
    scanf("%f", &sideC);
    flushall();
    
    if (sideA+sideB>sideC&&sideA+sideC>sideB&&sideC+sideB>sideA)
    {
        printf("Your measurments are valid");
    }
    else
    {
        printf("Nope. You're Wrong");
    }

    getchar();
    return 0;
}
    
    
    
    
