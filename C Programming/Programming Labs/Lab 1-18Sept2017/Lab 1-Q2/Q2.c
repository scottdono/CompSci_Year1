/*Program function: To fix bad code
Author: Scott Donnelly
Date: 18/09/2017
*/

#include <stdio.h>;
int main()

{
    //Program to illustrate errors in a C program
    int num1;
    int num2;
    float num3;
    
    //Values for variables
    num1 = 400;
    num2 = 600;
    num3 = 4.54321;
    
    // Putting variables on standard output
    printf("The value of num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    printf("num 3 is %f\n",num3);
    getchar();
    
    return 0;
}