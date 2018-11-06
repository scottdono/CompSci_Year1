/*Function: To display a sequence of Fibonacci numbers based on what number the user wants
to see.
Author: Scott Donnelly
Date: 23/10/17
*/

#include <stdio.h>
#define SIZE 50
int main()

{
    //declaring variables
    int A[SIZE];
    int n;
    int i;
    
    //instructions for the user
    printf("Please enter the number of terms you would like to see from the Fibonacci series");
    
    //for loop
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&A[i]);
        //Using the formula Fn+2=Fn+1+Fn      
        
        if(i<SIZE)
        {
            printf("%d\n", n);
        }
    }
    
    getchar();
    return 0;
}//end main
        
    
    
    
