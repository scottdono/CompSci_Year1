/*
Function:  Write a program using functions, structures and strings to simulate a data structure for a driving licence. The structure should include information on the driver
i.e their name, date of birth, height, weight and eye colour.
Author: Scott Donnelly
Date: 12/04/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date  //structure for date of birth as three seperate intgers
{
	int day;
	char month[12];
	int year;
};

struct driving_licence //structure to hold personal details fit for a driverrs licence
{
    char firstname[10];
    char surname[20];
    struct date DOB; //nested structure for the date of birth
    float height;
    char eye_colour[10];
    float weight;
};

//prototypes
void enterStruct(char firstname[], char surname[], struct date DOB, float *height, char eye_colour[], float *weight); //allows you to enter information into the structure. Parameters use pass by reference
void display(char firstname[], char surname[], struct date DOB, float *height, char eye_colour[], float *weight); //displays the contents of the structure. Uses pass by reference

int main()
{
    struct driving_licence driver1;  //Declaring structure variables for two drivers
    struct driving_licence driver2;

    printf("Please enter the driver information for your licence\n");

    printf("Driver 1:\n");
    enterStruct(driver1.firstname, driver1.surname, driver1.DOB, driver1.height, driver1.eye_colour, driver1.weight); //function calls for the information of both drivers

    //printf("\nDriver 2:\n");
   // enterStruct(driver2.firstname, driver2.surname, driver2.DOB, driver2.height, driver2.eye_colour, driver2.weight);

    display(driver1.firstname, driver1.surname, driver1.DOB, driver1.height, driver1.eye_colour, driver1.weight); //function call to displat the information
   // display(driver2.firstname, driver2.surname, driver2.DOB, driver2.height, driver2.eye_colour, driver2.weight);

    return 0;
}//end main


//-----------------FUNCTIONS-----------------------------

void enterStruct(char firstname[], char surname[], struct date DOB, float height, char eye_colour[], float weight)  //struct driving_licence
{
    printf("First name: ");
    scanf("%s",firstname);
    fflush(stdin);

    printf("Surname: ");
    scanf("%s",surname);
    fflush(stdin);

    printf("Date of Birth: \n");
    printf("Day: ");
    scanf("%d",&DOB.day);
    fflush(stdin);
    printf("Month: ");
    scanf("%s",DOB.month);
    fflush(stdin);
    printf("Year: ");
    scanf("%d",&DOB.year);
    fflush(stdin);

    printf("Height (cm): ");
    scanf("%f",&height);
    fflush(stdin);

    printf("Eye Colour: ");
    scanf("%s",eye_colour);
    fflush(stdin);

    printf("Weight (Kg): ");
    scanf("%f",&weight);
    fflush(stdin);
}


void display(char firstname[], char surname[], struct date DOB, float height, char eye_colour[], float weight)
{

    printf("\nDriver's details are:\n");
    printf("Firstname: %s\n",firstname);
    printf("Surname: %s\n",surname);
    printf("Date of Birth: %d/%s/%d\n",DOB.day, DOB.month, DOB.year);
    printf("Height: %.1f cm\n",height);
    printf("Eye Colour: %s\n",eye_colour);
    printf("Weight: %.1f Kg\n",weight);

}
