/* Solution to lab test 2
Program to enter data into
gallons/miles and populate a mog array

array_name[i] ~ *(array_name+i)
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	float gallons[SIZE];
	float miles[SIZE];
	float mog[SIZE];
	int i;
	
	//enter data into the gallons/miles array
	printf("Enter data into the gallons array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%f", &*(gallons+i));
	}
	
	printf("\nEnter data into the miles array\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%f", &*(miles+i);
	}
	
	/*Fill the mpg array with data using 
	mpg = miles/gallons
	*/
	
	for(i=0;i<SIZE;i++)
	{
		*(mpg+i) = *(miles+i) / *(gallons+i);
		
		printf("\n%f", *(mpg+i);
	}
	
	return 0
}
	