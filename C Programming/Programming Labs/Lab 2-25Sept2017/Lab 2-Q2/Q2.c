/* Program Function: To display the volume and surface area of a box
Author: Scott Donnelly
Date: 25/09/2017
*/

#include<stdio.h>

int main()
{
    //Dimentions of the box and declaring the variables
    int height=10;
    float length=11.5;
    float width=2.5;
    
    //Display the results
    printf("The volume of the box is %f\n", height*length*width);
    printf("The combined surface area of the box is %f", (height*length)*2+(height*width)*2+(length*width)*2);
    getchar();
    
    return 0;
}
    
    
    