/*
Function:
Author: Scott Donnelly
Date: 12/04/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aerlingus
{
    char flight_num[10];
    char date[13];
    char surname[20];
    char firstname[10];
    char seat_num[4];
};

void enterStruct();
void display();

struct aerlingus flight[2];

 int main()
{
    printf("Please enter the passenger information for your flight\n");

    enterStruct();

    display();

    return 0;
}//end main

void enterStruct()
{
    int i;

    for(i=0;i<2;i++)
    {
        printf("\nPassenger %d:\n",(i+1));
        printf("First name:\n");
        scanf("%s",flight[i].firstname);
        fflush(stdin);

        printf("\nNow enter their surname\n");
        scanf("%s",flight[i].surname);
        fflush(stdin);

        printf("\nNow their seat number\n");
        scanf("%s",flight[i].seat_num);
        fflush(stdin);


        if(i==1)
        {
            break;
        }
        else
        {
            printf("\nNow their flight number\n");
            scanf("%s",flight[i].flight_num);
            fflush(stdin);

            printf("\nAnd finally the date of their flight as DD/MM/YYYY\n");
            scanf("%s",flight[i].date);
            fflush(stdin);
        }
    }
    strcpy(flight[1].flight_num,flight[0].flight_num);
    strcpy(flight[1].date,flight[0].date);
}
void display()
{
    int i;

    for(i=0;i<2;i++)
    {
        printf("\n\nPassenger %d details are:\n",(i+1));
        printf("Firstname: %s\n",flight[i].firstname);
        printf("Surname: %s\n",flight[i].surname);
        printf("Date of flight: %s\n",flight[i].date);
        printf("Flight number: %s\n",flight[i].flight_num);
        printf("Seat number: %d\n",flight[i].seat_num);
    }
}
