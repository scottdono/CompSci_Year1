/* Function: To show how to initialise two 3x4 arrays
Author: Scott Donnelly
Date: 13/11/17
*/

#include <stdio.h>

#define ROW 4
#define COL 3

int main()
{
    int array1[ROW][COL]={0,1,2,
                        3,4,5,
                        6,7,8,
                        9,10,11  
                        };
    int array2[ROW][COL]={0,1,2,
                        3,4,5,
                        6,7,8,
                        9,10,11  
                        };
    int array3[ROW][COL];
    int i,j;
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            array3[i][j]=(array1[i][j]*array2[i][j]);
            printf("%d\n", array3[i][j]);
        }
    }
    
    getchar();
    return 0;
}
    
    