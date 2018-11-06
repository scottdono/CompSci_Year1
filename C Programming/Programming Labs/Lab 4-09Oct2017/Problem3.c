/* Program Function: Marital status problem
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    char letter;
    letter='_';
    
    printf("Enter in what marital status applies to you\n");
    printf("Married(m)\n");
    printf("Single(s)\n");
    printf("Widowed(w)\n");
    printf("Engaged(e)\n");
    printf("Divorced(d)\n");
    scanf("%c",&letter);
    flushall();
    
    //start the switch
    switch(letter)
    {
        case 'm':
        case 'M':
        {
            printf("You are married! Congradulations!");
            break;
        }
        case 's':
        case 'S':
        {
            printf("You are single... Hate that.");
            break;
        }
        case 'w':
        case 'W':
        {
            printf("You are widowed. I'm sorry for your loss.");
            break;
        }
        case 'e':
        case 'E':
        {
            printf("You are engaged. Yayyyy!");
            break;
        }
        case 'd':
        case 'D':
        {
            printf("You are divorced.");
            break;
        }
        default:
        {
            printf("Please enter a character that applies to your relationship status");
            break;
        }
    }
    
    getchar();
    return 0;
}
        
    