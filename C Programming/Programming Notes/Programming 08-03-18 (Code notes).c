/*
Function: Structures
Author: Scott Donnelly
Date: 08/03/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#define SIZE 5

//structure template
struct student_rec
{
    int student_ID;
    char firstname[11];
    char surname[21];
    int results[5];
};


int main()
{
	struct student_rec student1;
	int i;

	printf("Enter student details\n");

	printf("\nEnter ID\n);
	scanf("%d", &student1.student_ID);

	printf("\nEnter First name\n");
	gets(student1.firstname);  // alternatively scanf("%s", student1.firstname);

	printf("\nEnter Surname\n");
	gets(student1.surname);

	printf("\nEnter results\n");

	for(i=0;i<SIZE;i++)
	{
		scanf("%d", &student.results[i]);
	}

    //display data entered
    printf("\nStudent ID is%d", student1.student_ID);
    puts(student1.firstname);
    puts(student1.surname);

    for(i=0;i<SIZE;i++)
    {
        printf("%d", student1.results[i]);
    }

    return 0;
}   //end main()
