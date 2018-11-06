/* Program Function: Write a program that asks the user to enter an integer between 1 and 100. Check whether the integer is even or odd.
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    //Declaring your variables
    int input=0;
    int output;
    printf("Enter a number between 1 and 100.\n");
    
    scanf("%d", &input);
    flushall();
    
    output=input%2;
    
    switch(output)
    {
        case 1:
        {
            printf("The number you have entered is ODD");
            break;
        } //end case 1
        case 0:
        {
            printf("The number you have entered is EVEN");
            break;
        } //end case 0
        default:
        {
            printf("Please enter a valid number");
            break;
        } //end default
    } //end switch
        
        getchar();
        return 0;
} //end main
    
    
    
    

    