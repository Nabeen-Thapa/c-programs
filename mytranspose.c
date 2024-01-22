#include<stdio.h>
int main()
{
	//int m,n;
	int t[m][n],r[m][n],i,j;
	printf("enter the number of rows: ");
	scanf("%d",&m);
	printf("enter the number of  col: ");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
		printf("\n in matrix form:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			r[j][i]=t[i][j];
		}
	}
	printf("\n transpose matrix form:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",t[j][i]);
		}
		printf("\n");
	}
	return 0;
}
