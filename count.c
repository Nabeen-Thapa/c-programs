#include<stdio.h>
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter num: ");
	scanf("%d",&n);
	while(n>0)
	{
		n/=10;
		count++;
	}
	printf("%d digits",count);
	return 0;
	
}
