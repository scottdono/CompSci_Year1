/*
Function: Fucntions that calibrate the area of a square and the area of a circle.
Author: Scott Donnelly
Date: 15/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14

//prototype
float AreaSq(int*);
float AreaCirc(int*);

int main()
{
    int selection=2;
    int side;
    int radius;
    float area=0;

    printf("This program can calculate the area of a square or a circle!\n\n"); //Small selection menu for the user
    printf("To calculate the Area of a Square please enter '0'\n");
    printf("To calculate the Area of a Circle please enter '1'\n");

    scanf("%d", &selection); //selecting an option
    if(selection==0)
    {
        printf("What is the length of the side of the square?\n");
        scanf("%d", &side);
        area = AreaSq(&side);  //returning the contents using pass by reference
        printf("\nThe area of the square is: %.1f\n", area);
    }
    else if(selection==1)
    {
        printf("What is the radius of the circle?\n");
        scanf("%d", &radius);
        area = AreaCirc(&radius); //returning the contents using pass by reference
        printf("\nThe area of the circle is: %.1f\n", area);
    }

	return 0;
}	//end main()

//Implementing AreaSq()
float AreaSq(int *side)
{
    float length=0;
    float area_square=0;

    length = *side;
    area_square = length*length;

    return(area_square);

}

//Implementing AreaCirc()
float AreaCirc(int *radius)
{
    float rad=0;
    float area_circle=0;

    rad = *radius;
    area_circle = Pi*(rad*rad);

    return(area_circle);
}



