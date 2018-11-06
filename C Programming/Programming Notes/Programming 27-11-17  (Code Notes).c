/*Programming Lecture 27/11/2017

"Malloc Function"

Using malloc() to allocate memory
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	int no_of_bytes;
	int i;
	
	//enter the number of numbers
	printf("How many numbers do you enter?"\n);
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
		
		for(i=0;i<no_of_bytes;i++)
		{
			scanf("%d", &*(ptr+i));
		}	//end for
		
		//display numbers entered
		for(i=0;i<no_of_bytes;i++)
		{
			printf("%d"\n, *(ptr+i));
		}	//end for
		
		//release allocated memory
		free(ptr);
	}	//end else
	
	return 0;
}	//end main() 



/* calloc function

	calloc()
	syntax: ptr = calloc(no_of_elements, size_of_each_element);


	//using calloc to allocate memory
	
	ptr = calloc(no_of_nums, sizeof(int));

*/	
		