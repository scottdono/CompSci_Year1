/*
Function: File i/o:: Opening and closing a file
Author: Scott Donnelly
Date: 21/03/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>


int main
{

    FILE *fp;
    //open a file "file.txt"
    fp = fopen("file.txt", "r");
    if(fp==NULL)
    {
        printf("Couldn't open file\n");
    }
    else
    {
        printf("File opened successfully\n");
        fclose(fp);
    }

    return 0;
} //end main
