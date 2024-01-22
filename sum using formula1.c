//calculator
#include<stdio.h>
#include<stdlib.h>
void sum();

int main()
{
	sum();
	return 0;
}
void sum()
{
	int num1,i,num2,sum=0,j;
	printf("enter first number: ");
	scanf("%d",&num1);
	printf("\nenter the last numbers: ");
	scanf("%d",&num2);
	sum=(num1*((num1+num2)/2))+5;
	
		printf("\n sum from %d to %d numbers = %d",num1,num2,sum);

}
