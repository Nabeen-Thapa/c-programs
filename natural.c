#include<stdio.h>
long int add(int);
int main()
{
	int num;
	printf("enter how many numbers: ");
	scanf("%d",&num);
	printf("\n The sum of first %d natural number is %d",num,add(num));
	return 0;
}
long int add(int n)
{
	if(n==0)
	return 0;
	else
	return (n+add(n-1));
}
