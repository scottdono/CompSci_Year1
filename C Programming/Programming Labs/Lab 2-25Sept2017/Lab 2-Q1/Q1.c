/* Program Function: To display a sum of integers and the average of float-point numbers
Author: Scott Donnelly
Date: 25/09/2017
*/

#include <stdio.h>

int main()
{
    //integers from 1 to 5
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    
     //float numbers from 1.1 to 2.0
    float fl0,fl1,fl2,fl3,fl4,fl5,fl6,fl7,fl8,fl9,fl10;
    
    //Initialising the integers
    var1=1;
    var2=2;
    var3=3;
    var4=4;
    var5=5;
    
    //Initialise the float numbers
    fl0=1.0;
    fl1=1.1;
    fl2=1.2;
    fl3=1.3;
    fl4=1.4;
    fl5=1.5;
    fl6=1.6;
    fl7=1.7;
    fl8=1.8;
    fl9=1.9;
    fl10=2.0;
    
     //Displaying the sum on standard output
    printf("The sum of integers 1 to 5 is %d\n", var1+var2+var3+var4+var5);
    
    //Displaying the average on standard output
    printf("The average of the float numbers from 1.0 to 2.0 is %f", (fl0+fl1+fl2+fl3+fl4+fl5+fl6+fl7+fl8+fl9+fl10)/11);
    getchar();
    
    return 0;
    
}
    

    
    
    