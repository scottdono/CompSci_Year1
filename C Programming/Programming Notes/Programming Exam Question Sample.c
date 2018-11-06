/*
Function: Exam Question 2015/16 on DMA
Author: Scott Donnelly
Date: 06/12/2017

Compiler used: CodeBlocks

(a) Write a program to dynamically allocate memory for a set of floating-point
numbers. Your program must ask the user to enter how many numbers they wish to enter.
It should dynamically allocate the memory and input the numbers. [15]

(b) Calculate the average of the numbers and display. [5]

(c) Write the code to accommodate 10 extra numbers. [10]
*/

#include <stdio.h>
#include <stdlib.h>
#define EXTRA 10

int main()
{
	float *ptr;
	int no_of_nums;
	float sum=0;
	float average=0;
	int i;

	//How many numbers to enter
	printf("How many numbers do you wish to enter?\n");
	scanf("%d", &no_of_nums);

	//Allocate memory
	ptr = calloc(no_of_nums, sizeof(float));

	//Check if memory allocated
	if(ptr==NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
		//Enter data into block
		for(i=0;i<no_of_nums;i++)
		{
			scanf("%f", &*(ptr+i));		//Alternate syntax: scanf("%f", ptr+i);
		}
		//Without any reallocation you should always free up the RAM. free(ptr);
	} //end else

	//(b) calculating average
	for(i=0;i<no_of_nums;i++)
	{
		sum = sum + *(ptr+i);
	}

	average = sum/no_of_nums;
	printf("The average is %.1f\n", average);

	//(c) realloc
	ptr = realloc(ptr, (no_of_nums+EXTRA)*sizeof(float));

	//Check if memory allocated
	if(ptr==NULL)
	{
		printf("Memory reallocation failed");
	}
	else
	{
		for(i=no_of_nums;i<no_of_nums+EXTRA;i++)
		{
			scanf("%f", &*(ptr+i));
		}
		free(ptr);

	} //end else

	return 0;

} //end main

