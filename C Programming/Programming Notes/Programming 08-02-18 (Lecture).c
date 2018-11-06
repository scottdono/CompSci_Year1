/*
Function: Lecture notes
Author: Scott Donnelly
Date: 08/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <my_file.h>

//prototype
void fxn(void);

int num = 0;

int main()
{
    //call fxn()
    fxn();

	return 0;
}	//end main()

//Implementing fxn()

void fxn()
{
    extern int num = 0;
    num++;
    printf("\nNum is %d", num);
} //end fxn()

