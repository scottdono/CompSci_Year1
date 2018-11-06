/*
Function:
Author: Scott Donnelly
Date: 12/04/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

//prototypes
int getSum(int, int);
void change(int*,int*);

int main
{

    int num1 = 5;
    int num2 = 7;
    int sum = 0;

    //call getSum()
    sum = getSum(num1,num2);
    printf("The sum of the variables is %d", sum);

    //call change()
    change(&num1, &num2);
    printf("Num1 contains %d and num2 contains %d", num1, num2);

    return 0;
}  //end main()



//Implementing getSum()
int getSum(int num1, int num2)
{
    int my_sum = 0;
    my_sum = num1 + num2;
    return my_sum;
}

//implementing change()
void change(int*ptr1,int*ptr2)
{
    printf("Enter two new numbers\n");
    scanf("%d", &*(ptr1));
    scanf("%d", &*(ptr2));


}

