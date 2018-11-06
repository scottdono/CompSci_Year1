/*
Function (Program Description):

Our assignment is to create a kind of lotto game where a user must enter 6 integer numbers ranging from 1-42. The numbers cannot be repeated.
All arrays must be accessed using pointer notation only. All options in the menu must be there own seperate functions. There must be sufficient error checking
and we do not assume perfect user input. The game should be replayable and the numbers entered while the program is running should be stored and available for recall
in the fifth option in the menu.


Author: Scott Donnelly
Date: 22/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 6

//prototype
void bubbleSort(int[]);  //these functions all use pass by reference to bring variables/arrays from the main into seperate functions
void comparison(int[], int[]);
int enterNum(int[], int[]);  //the return type of this function is an integer for making sure you can only use this function first
void recallNum(int[]);
void history(int[], int[]);


int main()
{
    int choice=0;
    int end=0;
    int winning_numbers[SIZE]={1,3,5,7,9,11};
    int player_numbers[SIZE]={0};
    int guess_history[42]={0};
    int i,j;
    int bonus=42;
    int check=0;

    //Welcome screen
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n\t\t\t\tWELCOME TO THE LOTTO!\n\nTo select an option from the menu enter the number that corresponds to the option you want.\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    getch();

    do  //this allows for an option to terminate the program by changing the variable in the parameters
    {
        system("cls"); //clears screen and redisplays menu during every loop

        choice=0; //this just makes sure that the choice variable is reset after a selection is made. This was a neccessary debug.

        printf("\n****************************************\n\n");
        printf("1. Enter you numbers\n2. Display the numbers you've entered\n3. Sort your numbers in ascending order\n4. Check your numbers\n5. Display your guess history\n6. Exit the program\n");
        printf("\n****************************************\n\n");

        scanf(" %d", &choice);  //The user must select options from the menu by entering the number that corresponds to their choice, based on the numbers beside the options.
        fflush(stdin);  //This helps debug in case a float or character is entered

        switch(choice) //switch statement allows for the user to choose what they want from a menu
        {
            case 1:
            {
                check = enterNum(player_numbers, guess_history); //calling function to enter numbers
                getch(); //the getch() function is placed after every selection to allow the user to read any output from the function before reverting back to the main menu.
                break;
            }

            case 2:
            {
                if(check==1) //option 1 must be selected before any other options become available
                {
                    recallNum(player_numbers); //displays the numbers within the array
                }
                else
                {
                    printf("Please enter your numbers in option 1 before moving onto anything else\n");
                }
                getch();
                break;
            }

            case 3:
            {
                if(check==1)
                {
                    bubbleSort(player_numbers); //calls a function to sort the users numbers in acending order
                }
                else
                {
                    printf("Please enter your numbers in option 1 before moving onto anything else\n");
                }
                getch();
                break;
            }

            case 4:
            {
                if(check==1)
                {
                    comparison(player_numbers,winning_numbers); //calls a function to check the users numbers against the winning numbers
                }
                else
                {
                    printf("Please enter your numbers in option 1 before moving onto anything else\n");
                }
                getch();
                break;
            }

            case 5:
            {

                if(check==1)
                {
                    history(guess_history, player_numbers); //calls a function to display the numbers used while the program was running
                }
                else
                {
                    printf("Please enter your numbers in option 1 before moving onto anything else\n");
                }
                getch();
                break;
            }

             case 6:
            {
                end=1; //terminates the program by ending the while loop
                break;
            }


            default: //error message for any input other than set cases
            {
                printf("Please enter a valid option!\n");
                getch();
                break;
            }
        } //end switch
    } //end do...while
    while(end==0);

	return 0;
}	//end main()




//--------------------------------FUNCTIONS-----------------------------------------------------


//implementing bubbleSort()
void bubbleSort(int player_numbers[SIZE])
{

    int i,j;
    int swap=0;
    int sorted_numbers[SIZE];

    for(i=0;i<SIZE;i++)
    {
        *(sorted_numbers+i) = *(player_numbers+i); /*place the values from the user into a seperate array for sorting. This means you can go back to display the numbers you entered
                                                    in their original order and in their sorted order.*/
    }

    for (i=0;i<(SIZE-1);i++) //compare a given element to the next element and swap if required
        {
            for(j=0;j<(SIZE-i-1);j++)
            {
                if(*(sorted_numbers+j) > *(sorted_numbers+j+1)) // For decreasing order use <
                {
                    swap = *(sorted_numbers+j);
                    *(sorted_numbers+j) = *(sorted_numbers+j+1); //This algorithm compares the values in the array and causes the largest values to "bubble" up the the top, hence the name.
                    *(sorted_numbers+j+1) = swap;
                }
            }
        }

        printf("Sorted list in ascending order:");
        for(i=0;i<SIZE-1;i++)
        {
            printf(" %d,",*(sorted_numbers+i));
        }
        printf(" %d.\n", *(sorted_numbers+i));
} //end bubbleSort()


//-----------------------------------------------------------------------------------------------------------


//implementing comparison()
void comparison(int player_numbers[SIZE], int winning_numbers[SIZE])
{
    int prize=0;
    int i,j;
    bool bonus=false;


    for(i=0;i<SIZE;i++) //comparing the elements in the arrays
    {
        if(*(player_numbers+i) == 42) //check if the player guessed the bonus number or not
        {
            bonus=true;
        }

        for(j=0;j<SIZE;j++)
        {
            if(*(player_numbers+i) == *(winning_numbers+j)) //count the amount of matched numbers
            {
                 prize++;
            }
        }

    } //end comparison loops


    // checking the amount of matched numbers to determine the prize if there is any
    if(prize<=3)
    {
        printf("Sorry no prizes this time.\nYou matched %d numbers\n\nThank you for playing.\n", prize);
        prize=0;
    }
    else if(prize<=3 && bonus==true)
    {
        printf("Sorry no prizes this time.\nYou matched %d numbers and the bonus number\n\nThank you for playing.\n", prize);
        prize=0;
    }

    if(prize==3 && bonus==true)
    {
        printf("Congratulations! You've won a cinema ticket!\nYou matched 3 numbers and the bonus number\n\nThank you for playing.\n");
        prize=0;
    }

    if(prize==4)
    {
        printf("Congratulations! You've won a night out in Dublin City!\nYou matched 4\n\nThank you for playing.\n");
        prize=0;
    }

    if(prize==4 && bonus==true)
    {
        printf("Congratulations! You've won a 5-Star weekend stay in Kilkenny!\nYou matched 4 numbers and the bonus number\n\nThank you for playing.\n");
        prize=0;
    }

    if(prize==5)
    {
        printf("Congratulations! You've won an all inclusive holiday to Dubai!\nYou matched 5\n\nThank you for playing.\n");
        prize=0;
    }

    if(prize==5 && bonus==true)
    {
        printf("Congratulations! You've won a brand new BMW!\nYou matched 5 numbers and the bonus number\n\tThank you for playing.\n");
        prize=0;
    }

    if(prize==6)
    {
        printf("JACKPOT!\nYou matched 6 numbers\n\nThank you for playing.\n");
        prize=0;
    }

} //end comparison()


//-----------------------------------------------------------------------------------------------------------


//implementing enterNum()
int enterNum(int player_numbers[SIZE], int guess_history[42])
{
    int i,j,k;
    int check=1;
    int loop=0;

    printf("Please enter any six numbers ranging from 1-42. You may not enter the same number twice.\n");


    for(i=0;i<SIZE;i++) //Debug to reset the contents of the array for multiple rounds of the game.
    {
        (*(player_numbers+i)=0);
    }

    while(loop==0) //having all the error checks in a while loop allows you to enter again if a mistake is made and exit if no mistakes are made. Without the use of goto.
    {
        loop=1; //the loop will exit unless an error occurs

        for(i=0;i<SIZE;i++)
        {
            scanf("%d",&*(player_numbers+i)); //entering values into an array using pointer notation
            fflush(stdin);

            guess_history[*(player_numbers+i)]++; //This is for the history function

            if(*(player_numbers+i)>42 || *(player_numbers+i)<1)  //This makes sure that the user can only enter numbers between 1 and 42 inclusive
            {
                printf("Invalid input! The numbers must range from 1-42\nPlease re-enter your numbers\n");
                i=-1; //if an error occurs reset the loop to take another 6 values
            }
        } //end for...loop

        for(j=0;j<SIZE-1;j++) //This checks the array for multiples and restarts the loop if necessary
        {
            for(k=j+1;k<SIZE;k++)
            {
                if(*(player_numbers+j) == *(player_numbers+k))
                {
                    printf("Invalid Input! You cannot use the same number multiple times!\nPlease re-enter your numbers\n");
                    i=-1; //if an error occurs reset the loop to take another 6 values
                    loop=0;
                }
            } //end inner for...loop
        } //end outer for...loop
    } //end while

    printf("\nThank you. You can now move onto other options\n");

    return check; //This makes sure you can only select the first option first

}   //end enterNum()


//-----------------------------------------------------------------------------------------------------------


//implementing recallNum()
void recallNum(int player_numbers[SIZE])
{
    int i;

    printf("Your numbers are");
    for(i=0;i<SIZE-1;i++)
    {
        printf(" %d,", *(player_numbers+i));
    }
    printf(" %d.\n", *(player_numbers+i)); //seperate printf for the last number for a full stop

}   //end recallNum()


//-----------------------------------------------------------------------------------------------------------


//implementing history()
void history(int guess_history[42], int player_numbers[SIZE])
{
    int i;
    //int check=0;

    for(i=0;i<42;i++)
    {
        if(*(guess_history+i) != 0)
        {
            printf("Number %d was used %d times\n", i, *(guess_history+i)); //This displays any numbers which have been entered thoughout the game.
        }
    } //end for...loop
} //end history()
