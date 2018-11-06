/*
Function: To create a currency converter using functions with a menu
Author: Scott Donnelly
Date: 22/02/18

Compiler used: Code::Blocks

*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3


//prototype
float change_to_euro(float[]);
float change_to_dollar(float[]);

int main()
{
    float euro[SIZE]={0};
    float dollar[SIZE]={0};
    float average=0;
    int i;
    int choice=2;

    printf("\nPlease choose the currency you want converted\n\n"); //Display a selection for the user
    printf("To convert Dollar to Euro. Enter 0\n");
    printf("To convert Euro to Dollar. Enter 1\n");
    scanf("%d", &choice);

    if(choice!=0 && choice!=1) //error checking
    {
        printf("Input error!\n");
    }


    if(choice==0)
    {
        printf("\nEnter in the three amounts you want converted\n");

        for(i=0;i<SIZE;i++) //for loop to assign to elements of array dollar[]
        {
            scanf("%f",&dollar[i]);
        }

        average=change_to_euro(dollar);//call the function change_to_euro()
        printf("\nAverage: $%.2f\n",average);
    }

    else if(choice==1)
    {
        printf("\nEnter in the three amounts you want converted\n");

        for(i=0;i<SIZE;i++) //for loop to assign to elements of array euro[]
        {
            scanf("%f",&euro[i]);
        }

        average=change_to_dollar(euro);//call the function change_to_dollar()
        printf("\nAverage: $%.2f\n",average);
    }

    return 0;
} //end main()


//Implementing the function change_to_euro()
float change_to_euro(float dollar[])//begin function change_to_euros
{
    float answer[SIZE];
    float mean=0;
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("You entered %d. %.2f\n",i+1, dollar[i]); //show what the user entered (The +1 is so that they appear in numbered order w/o the zero)
    }

    for(i=0;i<SIZE;i++) //for loop to convert the values within the array and place them in another array
    {
        answer[i]=(dollar[i]*0.84);
        printf("Answer=EUR%.2f\n",answer[i]);
        mean=mean+dollar[i];
    }

    mean=mean/SIZE;

    return(mean); //bring this value back into main()
}


//Implementing the function change_to_dollar()
float change_to_dollar(float euro[])
{
    float answer[SIZE];
    float mean=0;
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("You entered %d. %.2f\n",i+1, euro[i]);  //show what the user entered
    }

    for(i=0;i<SIZE;i++) //for loop to convert the values within the array and place them in another array
    {
        answer[i]=(euro[i]*1.19);
        printf("Answer=$%.2f\n",answer[i]);
        mean=mean+euro[i];
    }

    mean=mean/SIZE;

    return(mean); //bring this value back into main()
}
