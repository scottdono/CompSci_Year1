/* Program Function: To display the remainder of a series of operations
Author: Scott Donnelly
Date: 25/09/2017
*/

#include<stdio.h>

int main()
{
    //Declaring the variables for the operations
    int var1=2;
    int var2=3;
    int var3=5;
    int var4=7;
    int var5=33;
    int var6=100;
    
    printf("2 divided by 2 is %d\n", var1%var1);
    printf("3 divided by 2 is %d\n", var2%var1);
    printf("5 divided by 2 is %d\n", var3%var1);
    printf("7 divided by 3 is %d\n", var4%var2);
    printf("100 divided by 33 is %d\n", var6%var5);
    printf("100 divided by 7 is %d\n", var6%var4);
    getchar();
    
    return 0;
}
    
    