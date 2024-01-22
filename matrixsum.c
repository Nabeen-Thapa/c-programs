#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],i,j,sum[2][3];
	printf("enter the elements in a:");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("elements of a:\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%d ",a[i][j]);
	}
printf(" \n");	
}
	printf("\nenter the elements in b:");
	for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	printf("\n");
}
printf("\nthe elements of b:\n");
	for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}
}
printf("the sum is:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",sum[i][j]);
	}
	printf("\n");
}
return 0;
}
