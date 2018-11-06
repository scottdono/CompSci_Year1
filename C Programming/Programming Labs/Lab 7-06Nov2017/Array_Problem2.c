/* Function: To write a program that uses a 3x2 array
Author: Scott Donnelly
Date: 06/11/17
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int matrix[ROW][COL];
    int i,j;
    int sum=0;
    int biggest=0;
    int smallest=matrix[0][0];
    
    
    //instructions for the user
    printf("Please Enter 6 values for the array\n");
    
    //enter data into the array
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d", &matrix[i][j]);
            flushall();
            sum=sum+matrix[i][j];
        }
       
    }
    
    //display the information in the array
    printf("Data entered in\n");
     for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d\n",matrix[i][j]);
            if(matrix[i][j]>biggest)
            {
                biggest=matrix[i][j];
            }
            if(matrix[i][j]<smallest)
            {
                smallest=matrix[i][j];
            }
        }
    }
    
    //print the average
    printf("The average of the numbers is %d\n", sum);
    printf("The biggest number is %d\n", biggest);
    printf("The smallest number is %d\n", smallest);
    
    
    getchar();
    return 0;
}