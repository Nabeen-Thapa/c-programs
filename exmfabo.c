//fabonacci
#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	printf("enter mun of terms: ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d %d ",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
