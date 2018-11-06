/*
Function: Passing a structure to a pointer
Author: Scott Donnelly
Date: 15/03/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

//structure template
struct student_rec
{
    int student_ID;
    char firstname[11];
    char surname[21];
    int results[5];
};

//prototypes
void display(struct student_rec);
void get(struct student_rec*);

int main
{
    struct student_rec student1;
    struct student_rec *ptr;

    ptr = &student1;

    get(ptr);  //pass by reference

    display(student1);

    return 0;
} //end main


//implementing display()
void display(struct student_rec)
{
    int i;
    printf("\nStudent record is\n");
    printf("\n%d",student_rec.student_ID);
    printf("\n%s",student_rec.firstname);
    printf("\n%s",student_rec.surname);
    for(i=0;i<5;i++)
    {
        printf("\n%d",student_rec.results[i]);
    }
}


//implementing get()
void get(struct student_rec*p)
{
    int i;

    printf("Enter ID\n");
	scanf("%d", &(p->student_ID));

	printf("Enter First name\n");
	scanf("%s", (p->firstname));

	printf("Enter Surname\n");
	scanf("%s", (p->surname));

	printf("Enter your results\n");
	for(i=0;i<5;i++);
	{
		scanf("%d", &(p->results[i]));
	}


}
