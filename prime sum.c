#include<stdio.h>
int main()
{
	int n,i,j,count=0,sum=0;
		for(i=1;i<=20;i++)
	{
		for(j=1;j<=20;j++)
		{
		if(i%j==0)
		{
			count++;
		}
	}
	while(count==2)
	{
		sum=sum+count;
		printf("tha sum is %d",sum);
	}
	
	}

	return 0;
}
