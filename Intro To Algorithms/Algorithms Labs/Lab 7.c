/*STACK PUSH() AND POP() IMPLEMENTATION USING ARRAYS*/
#include <stdio.h>
#include<conio.h>
#define MAX 5

int top, status;

//prototype
void push (char stack[], char item);
int pop (char stack[]);
void display (char stack[]);


int main()
{
    char stack [MAX], item;
    int ch;
    system("cls");
    top = -1;

    do
    {
        do
        {
            printf ("\nMAIN MENU");
            printf ("\n1.PUSH/POP the stack. (Enter '*' to pop and any character to pop)");
            printf ("\n2.Exit (End the Execution)");
            printf ("\nEnter Your Choice: ");
            scanf  ("%d", &ch);
            if (ch<1 || ch>3)
            printf ("\nInvalid Choice, Please try again");

        }while (ch<1 || ch>3);

        switch (ch)
        {
            case 1:
                    printf("\nEnter the Element to be pushed : ");
                    fflush(stdin);
                    scanf("%c", &item);
                    fflush(stdin);

                    if(item=='*')
                    {
                        item = pop (stack);

                        if (status)
                        {
                            printf ("\nThe Popped item is %c.  After Popping: ",item);
                            display (stack);
                        }
                        else
                        {
                            printf ("\nStack underflow on Pop");
                        }
                        break;
                    }

                    push (stack, item);

                    if (status)
                    {   printf ("\nAfter Pushing ");
                        display (stack);
                        if (top == (MAX-1))
                        printf ("\nThe Stack is Full");
                    }
                    else
                    {
                       printf ("\nStack overflow on Push");
                    }
                    break;

            default:
                    printf ("\nEND OF EXECUTION");
        }   //end switch

    }while (ch != 3);

    getch();

    return 0;
} //ends main()


//-------------------Functions---------------

/*PUSH FUNCTION*/
void push (char stack[], char item)
{
    if (top == (MAX-1))
    status = 0;
    else
    {
        status = 1;
        ++top;
        stack [top] = item;
    }
}

/*POP FUNCTION*/
int pop (char stack[])
{
    int ret;
    if (top == -1)
    {
        ret = 0;
        status = 0;
    }
    else
    {
        status = 1;
        ret = stack [top];
--top;
    }
return ret;
}

/*FUNCTION TO DISPLAY STACK*/
void display (char stack[])
{   int i;
    printf ("\nThe Stack is: ");
    if (top == -1)
printf ("empty");
    else
    {   for (i=top; i>=0; --i)
  printf ("\n--------\n|%c   |\n--------",stack[i]);
    }
    printf ("\n");
}
