/* Program Function: To perform and display a series of operations
Author: Scott Donnelly
Date: 25/09/2017
*/

#include<stdio.h>

int main()
{
    //Declaring and initialising the variables
    int var1=15;
    int var2=10;
    int var3=3;
    float var4;
    
    var4=(float)var1/var2;
    
    printf("15+10=%d\n", var1+var2);
    printf("15-10=%d\n", var1-var2);
    printf("15x10=%d\n", var1*var2);
    printf("15/10=%f\n", var4);
    printf("15 modulus 3=%d\n", var1%var3);
    getchar();
    
    return 0;
}
    
 