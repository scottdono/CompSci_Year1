/* Program Function: Write a program that asks the user to enter a character from the keyboard and displays a message whether the character is a vowel or not.
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    char letter;
    letter='_';
    
    printf("Enter in a single character on your keyboard\n");
    scanf("%c",&letter);
    flushall();
    
    //start the switch
    switch(letter)
    {
        case'a':
        {
            printf("You entered a vowel");
            break;
        } //end case 'a'
        case'e':
        {
            printf("You entered a vowel");
            break;
        } //end case 'e'
        case'i':
        {
            printf("You entered a vowel");
            break;
        } //end case 'i'
        case'o':
        {
            printf("You entered a vowel");
            break;
        } //end case 'o'
        case'u':
        {
            printf("You entered a vowel");
            break;
        } //end case 'u'
        default:
        {
            printf("You enterered a consonant");
            break;
        } //end default
    } //end switch
        
        getchar();
        return 0;
} //end main
    