#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter num: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%2==0)
	{
		count++;
	}
}
if(count==2)
{
	printf("prime");
}
else
{
	printf("not prime");
}
return 0;
}
