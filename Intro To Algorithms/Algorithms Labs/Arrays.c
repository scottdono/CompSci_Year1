/*
Function:
Author: Scott Donnelly
Date: 01/02/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    int i,j;
    int size=0;
    int M[1000]={0};
    int counter=0;
    time_t ran;

    srand((unsigned) time(&ran));

    printf("Please enter a size for the array. Either 10, 100 or 1000\n");
    scanf("%d", &size);
    printf("\n");
    if(size==10 || size==100 || size==1000 || size==10000)
    {
        for(i=0;i<size;i++) //Putting random numbers in M[]
        {
            random = (rand()%1000+1);
            M[i]= random;
            printf("%d\n", M[i]);
        }

        //Checking how many times 10, 100 and 1000 appear in the arrays
        for(i=0;i<size;i++)
        {
            if(M[i]==10 || M[i]==100 || M[i]==1000)
            {
                counter++;
            }
        }
        printf("There were %d matches in the array\n", counter);
    }
    else
    {
        printf("Error! Please enter a valid array size\n");

    }

	return 0;
}	//end main()


