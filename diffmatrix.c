#include<stdio.h>
int main()
{
	int y,x,A[x][y],B[x][y],i,j;
	printf("enter the no. of rows and colunms: ");
	scanf("%d%d",&x,&y);
	printf("enter the elements for A:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&A[i][j]);
    	}
	}
	printf("elements of a:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",A[i][j]);
			
	    }
    	printf("\n");
	}
	return 0;
}
