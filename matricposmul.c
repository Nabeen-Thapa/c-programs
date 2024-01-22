#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],s[10][10];
	int n,m,l,p,i,j,k;
	printf(" enter row of first matrix: ");
	scanf("%d",&m);
	printf(" enter column of first matrix: ");
	scanf("%d",&n);
	printf(" enter row of swcond matrix: ");
	scanf("%d",&l);
	printf(" enter column of second matrix: ");
	scanf("%d",&p);
	if(n!=l)
	printf("not pissible");
	else
	{
		printf(" \n enter the first matrix: ");
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				printf(" \n enter a[%d] [%d]: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	printf(" \n enter the second matrix: ");
		for(i=0;i<=l-1;i++)
		{
			for(j=0;j<=p-1;j++)
			{
				printf("\n enter b[%d] [%d]: ",i,j);
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
				printf("%d: ",s[i][j]);
			}
			printf("\n");
		}
	}
}
