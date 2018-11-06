/*
Function: Menu navigation
Author: Scott Donnelly
Date: 22/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MIN 1
#define MAX 5

//prototype
int menu(); //For navigating a menu using the arrow keys
void arrow(int, int); //For highlighting a selection

int main()
{
    int winning_numbers[6]={1,3,5,7,9,11};
    int enter=0;
    int option=0;

    while(true)
    {
       option =  menu();// call the function menu() and put the returned data into 'option'

        if(option == 1)
        {
            printf("This is option 1\n");
            Sleep(1000);
        }
        else if(option == 2)
        {
            printf("This is option 2\n");
            Sleep(1000);
        }
        else if(option == 3)
        {
            printf("This is option 3\n");
            Sleep(1000);
        }
        else if(option == 4)
        {
            printf("This is option 4\n");
            Sleep(1000);
        }
        else if(option == 5)
        {
            printf("This is option 5\n");
            Sleep(1000);
        }

    }


	return 0;
}	//end main()




//--------------------------------FUNCTIONS-----------------------------------------------------

//Implementing menu()
int menu()
{

    system("cls"); //this clear screen function refreshes the menu when you move the arrows
    int position = 1;
    int keyPressed = 0;

    while(keyPressed !=13) //13 is the ASCII value for ENTER
    {
        system("cls");

        arrow(1, position);
        printf("1. Enter you numbers\n");

        arrow(2, position);
        printf("2. Display the numbers you've entered\n");

        arrow(3, position);
        printf("3. Sort your numbers in ascending order\n");

        arrow(4, position);
        printf("4. Check your numbers\n");

        arrow(5, position);
        printf("5. Exit the program\n");

        keyPressed = getch();

        if(keyPressed == 80 && position != MAX) //80 is the ASCII value for the UP arrow on a keyboard
        {
            position++; /*incrementing/decrementing the position variable means when you bring the
                        variable into the arrow function it can determine where to place the arrow*/
        }
        else if(keyPressed == 72 && position != MIN) //72 is the ASCII value for the down arrow on a keyboard
        {
            position--;
        }
        else
        {
            position=position;
        }
    } //end while

    return position;
} //end menu()




//Implementing arrow()
void arrow(int realPosition, int arrowPosition)
{
    if(realPosition == arrowPosition)
    {
        printf(">");
    }
    else
    {
        printf(" ");
    }
} //arrowHere()

