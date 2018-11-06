/* Program Function: Ask the user to enter 2 numbers and display these on separate lines
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
     //Declaring and initialising the 2 variables for input.
    char ch1;
    char ch2;
    
    //Variable input
    printf("Enter 2 characters, one at a time\n");
    scanf("%1s",&ch1);
    scanf("%1s",&ch2);
    flushall();
    
    //Displaying to standard output
    printf("You entered:\n%c\n%c", ch1,ch2);
    
    getchar();
    
    return 0;
}//End main()