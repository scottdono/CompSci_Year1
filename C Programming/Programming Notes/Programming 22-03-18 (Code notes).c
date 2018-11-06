/*
Function: File i/o
Author: Scott Donnelly
Date: 22/03/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10


int main
{
    FILE *fp;
    fp = fopen("file.txt", "r");

    if(fp==NULL)
    {
        printf("Did not open file\n");
    }

/*
    OR

int main()
{
    FILE *fp;
    if((fp = fopen("file.txt", "r") == NULL)); You can open the file within an if statement
    {
        printf("Did not open file\n");
    }
    else
    {
    .
    .
    .
    }

}*/

    return 0;
} //end main



//---------------------------------------------------------------------------------------------------------


/*Read the contents of a file
character by character


#include <stdio.h>

int main()
{
    FILE *fp;
    char char_in;

    if((fp = fopen("file.txt", "r")) == NULL)
    {
        printf("Did not open file\n");
    }
    else
    {
        while((char_in - fgetc(fp) != EOF)
        {
            printf("%c", char_in);
        }
        fclose(fp);
    }

    return 0;
}

Write the contents of one file to another

#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out
    char char_in;

    if((fp+in = fopen("file.txt", "r")) == NULL)
    {
        printf("Did not open file\n");
    }
    else if((fp_open = fopen("new.txt", "w")) != NULL)
    {
        while((char_in = fgetc(fp_in)) != EOF)
        {
            fputc(char_in, fp_out);
        }
        fclose(fp_in);
        fclose(fp_out);
    }

    return 0;

}

