#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],s[10][10];
	int n,m,l,p,i,j,k;
	printf(" enter row and column of first matrix: ");
	scanf("%d%d",&m,&n);
		printf(" enter row and column of second matrix: ");
	scanf("%d%d",&l,&p);
		if(n!=l)
	printf("not pissible");
	else
	{
		printf("enter the first matrix: \n");
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				printf("enter a[%d] [%d]: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	printf(" \n enter the second matrix: \n");
		for(i=0;i<=l-1;i++)
		{
			for(j=0;j<=p-1;j++)
			{
				printf("enter b[%d] [%d]: ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
			s[i][j]=0;
			for(k=0;k<=n-1;k++)
			{
				s[i][j]=s[i][j]+a[i][k]*b[k][j];
			}
			}
		}
		printf(" the  matrix mul: \n");
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=p-1;j++)
			{
				printf("%d ",s[i][j]);
			}
			printf("\n");
		}
	}
}
