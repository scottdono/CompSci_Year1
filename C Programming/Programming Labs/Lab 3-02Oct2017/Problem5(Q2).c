/* Program Function: To make use of the scanf function
Author: Scott Donnelly
Date: 02/10/2017
*/

#include <stdio.h>

int main()
{
    //Declaring variables for input.
    int first=0;
    int second=0, third=0, fourth=0;
    float principal=0, rate=0, time=0;
    char keyval1=0, keyval2=0;
    char c=0;
    int i=0;
    float f=0;
    double d=0;
    
    printf("Enter 1 integer, then 3 intergers, then 3 floats, then 2 characters,\nthen 1 character, then 1 integer, then 2 floats\n");
    
    //(a)
    scanf("%d",&first);
    flushall();
    printf("First is %d\n", first);
    
    //(b)
    scanf("%d%d%d", &second, &third, &fourth);
    flushall();
    printf("Second is %d, Third is %d, Fourth is %d\n", second, third, fourth);
    
    //(c)
    scanf("%f%f%f", &principal, &rate, &time);
    flushall();
    printf("Principal is %f, Rate is %f, Time is %f\n", principal, rate, time);
    
    //(d)
    scanf("%c%c", &keyval1, &keyval2);
    flushall();
    printf("Key Value 1 is %c, Key Value 2 is %c\n", keyval1, keyval2);
    //(e)
    
    scanf("%c", &c);
    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%fl", &d);
    flushall();
    printf("C is %c, I is %d, F is %f, D is %fl", c,i,f,d);
    
    flushall();
    
    getchar();
    
    return 0;
}//End main()
    