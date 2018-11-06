/*
Function: Learning about functions. Tutorial
Author: Scott Donnelly
Date: 25/01/18

Compiler used: Code::Blocks

*/

#include <stdio.h>
#include <stdlib.h>
#define

int main()
{
	float avg=0;
	
	avg=calc_ave(num1,num2,num3);
	
	printf("The average is %.1f", avg);
	
	return 0;
	
}	//end main()




// implement calc_ave

float calc_ave(int n1,int n2,int n3)
{
	int sum=0;
	float average=0;
	
	sum=n1+n2+n3;
	average=sum/3.0;
	
	if (average>100)
	{
		return 10;
	}
	else
	{
		return 5;
	}

} //end calc_ave()