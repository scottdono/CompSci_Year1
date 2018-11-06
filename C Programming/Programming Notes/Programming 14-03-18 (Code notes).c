/*
Function: Structures (initialising a variable)
Author: Scott Donnelly
Date: 14/03/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>


int my_array[4]={2,4,6,8};

struct student_rec
{
    int student_ID;
    char firstname[11];
    char surname[21];
    int results[5];
};


int main
{                                                       
    struct student_rec student1 = {100,                   
                                   "Jim",                 
                                   "Jones",               
                                   {70, 45, 63, 84, 44}   
                                  };                     
                                                          

    return 0;
} //end main


/*
Pointer to a structure

int main()
{
	int *p;
	int i;
	
	struct student_rec student1;      
	struct student_rec *p;
            
    p = &student1
	
	printf("Enter ID\n");
	scanf("%d", &(p->student_ID));
	
	printf("Enter First name\n");
	scanf("%s", &(p->firstname));
	
	printf("Enter Surname\n");
	scanf("%s", &(p->surname));
	
	printf("Enter your results\n");
	for(i=0;i<5;i++);
	{
		scanf("%d", &(p->results[i]));
	}
	
*/

	