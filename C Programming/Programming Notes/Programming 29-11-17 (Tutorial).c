/*Summer Exam 2016/17. DMA question.

Q3. (a)
You are a software developer and asked to develop a program that allows a user to enter a set of numbers.
The user can decide the size of the set when the program runs. Your program must find the highest and lowest number in the set and display
both to standard output. Ignore any error checking. (22 Marks).

(b)
Show how you would modify the program in (a) to enable the user to enter a different size set of numbers. (10 marks).
*/


/*Q3(a) 2016/17

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaring variables
	int *ptr;
	int no_in_set;
	int i;
	int highest, lowest;
	
	printf("How many numbers in your set?\n");
	scanf("%d", &no_in_set);
	
	//allocate memory
	ptr = calloc(no_in_set, sizeof(int));
	
	//check if memory allocated
	if(ptr==NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
		//enter data(no_in_set)
		for(i=0;i<no_in_set;i++)
		{
			scanf("%d", &*(ptr+i));
		}
		
		//find the highest/lowest numbers
		highest = *ptr;
		lowest = *ptr;
		
		for(i=0;i<no_in_set;i++);
		{
			if(highest<*(ptr+i))
			{
				highest = *(ptr+i);
			}
			if(lowest>*(ptr+i))
			{
				lowest = *(ptr+i);
			}
		} //end for loop
		
		printf("The highest is %d\n", highest);
		printf("The lowest is %d\n", lowest);
		
		free(ptr);
		
	} //end if...else 
	return 0;
} //end main


/* Q3(b) 2016/17

*/
	int new_set;

	printf("How many new set of numbers?\n");
	scanf("%d", &no_in_set);
	
	//use realloc
	ptr = realloc(ptr, no_in_set*sizzeof(int));
	
	

	
	
	
	
	
	
	
	