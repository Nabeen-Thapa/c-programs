// passing arguments and with return type
#include<stdio.h>
int sum(int a[]);
int main()
{
	int a[10],i,s;
	printf("enter elements of array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum(a);
	printf("sum is %d",s);
	return 0;
}
int sum(int a[])
{
	int sum,i;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
