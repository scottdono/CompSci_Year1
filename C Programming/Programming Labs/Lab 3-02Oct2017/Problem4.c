/* Program Function: Ask the user to enter 2 numbers and display these on separate lines
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
     //Declaring and initialising the 2 variables for input.
    char ch0;
    char ch1;
    char ch2;
    
    //Variable input
    printf("Enter 2 characters, one at a time\n");
    ch1=getchar();
    scanf("%c",&ch0);
    ch2=getchar();
    flushall();
    
    //Displaying to standard output
    printf("\nYou entered:\n", ch1,ch2);
    putchar(ch1);
    putchar(ch2);
    flushall();
    
    getchar();
    
    return 0;
}//End main()