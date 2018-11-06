/*QUEUE PUSH() AND POP() IMPLEMENTATION USING ARRAYS*/
#include <stdio.h>
#include <conio.h>

#define MAX 5 //size of the queue/stack

int top, bottom, status; //universal variables

//prototype
void push (char queue[]); //function to add a character to the queue
int pop (char queue[]); //function to remove a character from the top of the queue
void display (char queue[]); //function to display the contents of the queue

char queue[MAX];
int rear = - 1;
int front = - 1;

int main()
{
    int ch; //variable for switch statement

    system("cls"); //clear screen

    top = -1;

    do
    {
        do
        {
            printf ("\nMAIN MENU");
            printf ("\n1.PUSH the queue.");
            printf ("\n2.POP the queue.");
            printf ("\n3.Exit (End the Execution)");
            printf ("\nEnter Your Choice: ");
            scanf  ("%d", &ch);
            fflush(stdin);

            if (ch<1 || ch>3)
            {
                printf ("\nInvalid Choice, Please try again");
            }

        }while (ch<1 || ch>3);

        switch (ch)
        {
            case 1:
                push(queue);
                display(queue);
                break;

            case 2:
                pop(queue);
                display(queue);
                break;

            default:
                printf ("\nEND OF EXECUTION");

        }   //end switch

    }while (ch != 3);

    getch();

    return 0;
} //ends main()


//--------------Functions---------------

/*PUSH FUNCTION*/
void push (char queue[])
{
    char item;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Insert the element in queue : ");
        scanf("%c", &item);
        fflush(stdin);
        rear = rear + 1;
        queue[rear] = item;
    }
}

/*POP FUNCTION*/
int pop (char queue[])
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %c\n", queue[front]);
        front = front + 1;
    }
}

/*FUNCTION TO DISPLAY queue*/
void display (char queue[])
{
    int i;
    printf ("\nThe queue is: ");
    if (front == -1)
    {
        printf ("empty");
    }
    else
    {
        for (i=front;i<=rear;i++)
        {
            printf ("\n---------\n|   %c   |\n---------",queue[i]);
        }
    }
    printf ("\n");
}

