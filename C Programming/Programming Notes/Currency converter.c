#include<stdio.h>
#include<stdlib.h>
#define S 3

float change_to_euro(float[]);//declare function prototypes for both functions

main()//begin main()
{
    float euro[S];//declare variables and arrays
    float dollar[S];
    float average;
    int i;//declaring counter
    char choice;//declaring choice charachter
    

    printf("\nEnter in the three amounts you want converted\n");
    for(i=0;i<S;i++)
    {
        scanf("%f",&dollar[i]);
    }
    average=change_to_euro(dollar);//call to function change_to_euros
    
    printf("\nAverage: \t%f\n",average);
}//end main()


float change_to_euro(float dollar[])//begin function change_to_euros
{
    float answer[S];
    float average=0;
    int i;
    
    for(i=0;i<S;i++)//for loop to show the user what they entered 
    {
        printf("You entered in the following values %d\t%f\n",i, dollar[i]);
    }
    
    for(i=0;i<S;i++)//for loop to change the value of the cureency
    {
        answer[i]=(dollar[i]*1.35);
    }
    
    for(i=0;i<S;i++)//for loop to display the answer
    {
        printf("Answer=\t%.2f\n",answer[i]);
    }
    
    for(i=0;i<S;i++)
    {
        average=average+dollar[i];
    }
    
    average=average/S;
    
    return(average);
}