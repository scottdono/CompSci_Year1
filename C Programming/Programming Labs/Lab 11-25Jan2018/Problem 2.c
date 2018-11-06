/*
Function: Dynamic memory allocation (Lab Q2)
Author: Scott Donnelly
Date: 25/01/18

Compiler used: CodeBlocks

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int *ptr;
	int no_of_nums=0;
	int no_of_bytes=0;
	int i;
	int array[SIZE];
	int sum=0;

	//enter the number of numbers
	printf("How many numbers do you enter?\n");
	scanf("%d", &no_of_nums);

	//calculate the size of memory required
	no_of_bytes = no_of_nums*sizeof(int);

	//allocate memory
	ptr = malloc(no_of_bytes);
	//check if memory is allocated successfully
	if(ptr == NULL)
	{
		printf("Memory allocation failed. Try again later\n");
	}
	else	//memory successfully allocated
	{
		printf("Memory allocation successful\n");

		//enter the numbers into a memory block
		printf("Enter your numbers in\n");

		for(i=0;i<no_of_nums;i++)
		{
			scanf("%d", &*(array+i));
		}	//end for

		//add numbers entered
		for(i=0;i<no_of_nums;i++)
		{
			sum=sum+*(array+i);
		}	//end for

		//print the sum of all numbers entered

		printf("The sum of your numbers is %d", sum);

		//release allocated memory
		free(ptr);
	}	//end else

	getchar();
	return 0;
}	//end main()
