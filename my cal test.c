#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int first,last,op;
	printf("first: ");
	scanf("%d",&first);
	printf("operators: ");
	scanf("%c",&op);
	printf("\nlast: ");
	scanf("%d",&last);
	if(op=='+')
	{
		printf("\n the result is %d",first+last);
	}
	else if (op=='-')
	{
	printf("\n the result is %d",first-last);	
	}
	else if (op=='*')
	{
	printf("\n the result is %d",first*last);	
	}
	else if (op=='/')
	{
	printf("\n the result is %d",first/last);	
	}
	else if (op=='%')
	{
	printf("\n the result is %d",first%last);	
	}
	
}
