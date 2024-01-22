// sum of series 1 + x2 + 3x2 + 4x2 + ......+ nx2
#include<stdio.h>
int main()
{
	int n, x, i, sum;
	printf("enter the value of series x and n for sum: ");
	scanf("%d%d",&x,&n);
	sum=1+x*x;
	for(i=3;i<=n;i++)
	sum=sum+i*x*x;
	printf("sum = %d",sum);
	return 0;
}
