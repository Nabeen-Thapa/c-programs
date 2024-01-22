#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void calculator();
struct calculator
{
	int operands;
    int operators;
};
struct calculator c[100];
int total,i;
int main()
{
calculator();
return 0;	
}

void calculator()
{
	int i;
printf("enter the operands with operators : ");
for(i=0;i<=5;i++)
{
	scanf("%d %c",&c[i].operands,&c[i].operators);
	}
	if(c[i].operators=="+")
	{
		total=c[i].operands+c[i+1].operands;
		}	
		printf("result is %d",total);
}
