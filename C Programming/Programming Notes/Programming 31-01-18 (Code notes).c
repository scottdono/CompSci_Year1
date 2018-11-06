/*
Function: Lecture notes
Author: Scott Donnelly
Date: 25/01/18

Compiler used: CodeBlocks

*/

#include <stdio.h>
#include <stdlib.h>
#define

//prototype

void change_val(int*);

int main()
{
	int num = 1;
	printf("num is %d", num);
	
	//call change_val
	change_val(&num);
	printf("\nnum is %d", num);
	
	return 0;
}	//end main()

/* Implement change_val()
*/
void change_val(int* ptr)
{
	(*ptr)++;
	printf("\val is %d", val);
} //end change_val()

-----------------------------------------------------------------------------------------------------------------------------------------------------

/* Swapping two numbers using Pass by reference
*/

#include <stdio.h>

//prototype

void swap(float*, float*);

int main()
{
	float num1, num2:
	printf("Enter two numbers\n");
	scanf("%f", &num1);
	scanf("%f", &num2);

// if the largest is in num1... swap
	if(num1>num2)
	{
		swap(&num1, &num2);
	} //end if

	printf("\n The numbers in order are %.1f", num1, num2);

	return 0;
} //end main
	
	
/* Implement swap()
*/

void swap(float*ptr1, float*ptr2)
{
	float tmp;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	
} // end swap()
