/*Assignment 1,
Function: To make a maths game with a menu displaying 4 options.
Author: Scott Donnelly
Date: 
*/

#include <stdio.h>  //this allows for standard i/o.
#include <conio.h>  //this allows for the clear screen command to work.
#include <stdlib.h> //this allows for a random number to be generated.
#include <dos.h> //this allows for a time delay before clearing the screen.

//defining constants for the program .
#define MAX_NO_OF_QUESTIONS 5
#define MIN_NO_OF_QUESTIONS 1

int main()
{
    //declaring and initialising variables.
    int exit=0;
    int option=0;
    int questions=0;
    int correct_answers=0;
    int incorrect_answers=0;
    int solution;
    int answer;
    int counter=0;
    int random1;
    int random2;
    
    do  //start do...while loop.
    {
        //display menu for user.
        clrscr();   //clear the screen and redisplay the menu.
        printf("1. Enter the number of questions to be asked for this round of the quiz\n(maximum of 5 questions allowed).\n2. Start quiz\n3. Display the number of questions that were answered (i) correctly and (ii)\nincorrectly for this round.\n4. Exit Program\n");
        scanf("%d", &option);   //keyboard input from user.
        flushall();
        
        
        //switch statement which is better than multiple nested if statements.
        switch(option)
        {
            case 1: //what happens when "1" is entered by the user.
            {
                printf("Please enter the number of questions you want to answer this round\n");
                scanf("%d", &questions);
                flushall();
                
                //error check.
                if(questions<=MAX_NO_OF_QUESTIONS && questions>=MIN_NO_OF_QUESTIONS)
                {
                    printf("Okay, Enter '2' on the main menu to begin the quiz\n\n");
                }
                else
                {
                    printf("Error. Please enter a valid number of questions\n");
                }
                sleep(2);   //wait for 2 seconds to allow the user to read and then continue.
                break;
            }
            
            case 2: //what happens when "2" is entered by the user.
            {    
                //error check.
                if(questions<=0)
                {
                    printf("Please state a number of questions.\n");
                }
                else
                {
                    printf("You will now be asked %d questions\n", questions);
                
                    //while loop to ask desired amount of questions.
                    while(counter<questions)
                    {
                        random1=(rand()% 9);    //generates random numbers and assigns them into a variable.
                        random2=(rand()% 10);
                    
                        //print the sum with random numbers, take an answer from the user and then display the users answer and the correct answer.
                        printf("\n%d x %d\n", random1, random2);
                        scanf("%d", &answer);
                        solution=random1*random2;
                        printf("The correct answer was %d\n", solution);
                        printf("You entered %d\n", answer);
                    
                        //check if the users answer is correct or incorrect and keep count
                        if(answer==solution)
                        {
                            correct_answers++;
                        }
                        else
                        {
                            incorrect_answers++;
                        }
                        counter++;  //the loop repeats until the counter is equal to the amount of questions desired by the user.
                    }
                    
                    //mark the end of the round.
                        while(counter==questions)
                        {
                            printf("\nThat's the end of this round. Enter '3' in the main menu to check your score.");
                            counter=0;  //reset.
                        }
                }
                questions=0; //reset.
                sleep(4);   //wait for 4 seconds to allow the user to read and then continue.
                break;
            }
            
            case 3: //what happens when "3" is entered by the user.
            {
                //if statement using OR logic with a built in error check.
                if(correct_answers!=0 || incorrect_answers!=0)
                {
                    printf("(i). The number of correct answers is %d\n", correct_answers);
                    printf("(ii). The number of incorrect answers is %d\n\n", incorrect_answers);
                }
                else
                {
                    printf("No score available.\n\n");
                }
                sleep(3);   //wait for 3 seconds to allow the user to read and then continue.
                break;
            }
            
            case 4: //what happens when "4" is entered by the user.
            {
                //assign a value other than "0" into the exit variable ends the do...while loop and therefore terminates the program.
                exit=1;
                break;
            }
            
            default: //what happens when an invalid option is entered by the user.
            {
                printf("Please enter a valid option.\n");
                sleep(2);   //wait for 2 seconds to allow the user to read and then continue.
                break;
            }
        }   //end switch.
    }
    while(exit==0); //end the do...while loop.
    
    return 0;
}   //end main.