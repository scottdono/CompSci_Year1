/* Program Function: Ask the user to enter 3 float numbers and display these on separate lines with different amounts of decimals.
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
     //Declaring and initialising the 3 variables for input.
    float var1=0;
    float var2=0;
    float var3=0;
    
    //Variable input
    printf("Enter 3 numbers one at a time\n");
    scanf("%f",&var1);
    scanf("%f",&var2);
    scanf("%f",&var3);
    flushall();
    
      //Displaying to standard output
    printf("You entered:\n%.4f\n%.3f\n%.0f\n", var1,var2,var3);
    
    getchar();
    
    return 0;
}//End main()