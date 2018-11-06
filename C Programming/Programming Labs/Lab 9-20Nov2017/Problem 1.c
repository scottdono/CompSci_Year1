/*Function:
Author: Scott Donnelly
Date:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1=0;
	char char1='a';
	int *ptr1;
	int *ptr2;

	ptr1 = &num1;
	ptr2 = &char1;

	//print the contents and address
	printf("The contents of num1 are %d\n", num1);
	printf("The address of num1 is %d\n\n", &*(ptr1));
	printf("The contents of char1 are %c\n", char1);
	printf("The address of char1 is %d\n\n", &*(ptr2));
    printf("The contents of ptr1 is %d\n", ptr1);
    printf("The contents of ptr2 is %d\n\n", ptr2);

	return 0;

} //end main
