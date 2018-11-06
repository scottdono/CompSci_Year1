/*
Lab Test

Function: To convert arrays of miles and gallons into miles/gallon using
only pointer notation.
Author: Scott Donnelly
Date: 04/12/2017
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY 5

int main()
{
    //declaring and initialising variables and arrays
    float gallons[5]={0};
    float miles[5]={0};
    float mpg[5]={0};
    int i;
    float *ptr;

    //allocate memory
    ptr = calloc(SIZE_OF_ARRAY, sizeof(float));

	//check if memory allocated
	if(ptr==NULL)
	{
		printf("Memory allocation failed");
	}
    else
    {
        for(i=0;i<SIZE_OF_ARRAY;i++)    //place values into the gallons array
        {
            printf("Please enter an amount of gallons\n");
            scanf("%f", &*(ptr+i));

            gallons[i] = *(ptr+i);
        }

        for(i=0;i<SIZE_OF_ARRAY;i++)    //place values into the miles array
        {
            printf("Please enter an amount of miles\n");
            scanf("%f", &*(ptr+i));

            miles[i] = *(ptr+i);
        }

        for(i=0;i<SIZE_OF_ARRAY;i++)    //place new values into mpg using the formula
        {
            mpg[i] = (miles[i])/(gallons[i]);
        }

        i=0; //reinitialise i

        while(i<SIZE_OF_ARRAY)  //display the contents of mpg
        {
            printf("Element %d of mpg contains %f\n", i, mpg[i]);
            i++;
        }


    }   //end if...else

    return 0;

} //end main
