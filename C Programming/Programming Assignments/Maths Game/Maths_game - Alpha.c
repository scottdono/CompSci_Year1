/*Assignment 1,
Function: To make a maths game with a menu displaying 4 options.
Author: Scott Donnelly
Date: 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_NO_OF_QUESTIONS 5
#define MIN_NO_OF_QUESTIONS 1

int main()
{
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
    
    do
    {
        printf("1. Enter the number of questions to be asked for this round of the quiz\n(maximum of 5 questions allowed).\n2. Start quiz\n3. Display the number of questions that were answered (i) correctly and (ii)\nincorrectly for this round.\n4. Exit Program\n");
        scanf("%d", &option);
        flushall();
        
        
        switch(option)
        {
            case 1:
            {
                printf("Please enter the number of questions you want to answer this round\n");
                scanf("%d", &questions);
                flushall();
                
                if(questions<=MAX_NO_OF_QUESTIONS && questions>=MIN_NO_OF_QUESTIONS)
                {
                    printf("Okay, Enter '2' to begin the quiz\n\n");
                }
                else
                {
                    printf("Error. Please enter a valid number of questions\n");
                }
                break;
            }
            
            case 2:
            {
                if(questions<=0)
                {
                    printf("please state a number of questions\n\n");
                }
                else
                {
                    printf("You will now be asked %d questions\n", questions);
                
                    while(counter<questions)
                    {
                        random1=(rand()% 9);
                        random2=(rand()% 10);
                    
                        printf("%d x %d\n", random1, random2);
                        scanf("%d", &answer);
                        solution=random1*random2;
                        printf("The correct answer was %d\n", solution);
                        printf("You entered %d\n\n", answer);
                    
                        if(answer==solution)
                        {
                            correct_answers++;
                        }
                        else
                        {
                            incorrect_answers++;
                        }
                        counter++;
                    }
                }
                break;
            }
            
            case 3:
            {
                if(correct_answers!=0 || incorrect_answers!=0)
                {
                    printf("(i). The number of correct answers is %d\n", correct_answers);
                    printf("(ii). The number of incorrect answers is %d\n\n", incorrect_answers);
                }
                else
                {
                    printf("No score available.\n\n");
                }
                break;
            }
            
            case 4:
            {
                exit=1;
                break;
            }
            
            default:
            {
                printf("Please enter a valid option\n\n");
                break;
            }
        }
    }
    while(exit==0);
    
    return 0;
}