/* Using calloc()

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	int i;
	char ans;
	int extra;
	int *tmp
	
	printf("How many numbers do you enter?\n");
	scanf("%d", &no_of_nums);
	
	//allocate memory
	
	ptr = calloc(no_of_nums, sizeof(int));
	
	//check if memory allocated
	
	if(ptr==NULL)
	{
		printf("Failed to allocate\n");
	}
	else
	{
		//enter data
		for(i=0;i<no_of_nums;i++)
		{
			scanf("%d", &*(ptr+1));
		}
	
		printf("Enter more numbers(y/n)?");
		scanf("%c", ans); 
		// or you can use getchar() ----> ans = getchar();
	
		if(ans=='y')
		{
			printf("How many more numbers?\n");
			scanf("%d", &extra);
		}
		//reallocate the memory block
		tmp=ptr;
		ptr = realloc(ptr, (no_of_nums*extra)*sizeof(int));
		
		if(ptr==NULL)
		{
			printf("Failed to allocate\n");
		}	
	}
	return 0;
	
} //end main

/* Using realloc()

Syntax: ptr = realloc(ptr, new_size);

new_size of the TOTAL SIZE of the block in bytes
*/

