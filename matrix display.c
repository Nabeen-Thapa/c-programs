#include<stdio.h>
int main()
{
	int x,y,a[x][y],b[x][y],i,j,sum[x][y];
	printf("enter the number of rows and columns: ");
	scanf("%d%d",&x,&y);
		printf("enter the elements in a:");
	for(i=0;i<x;i++)
	{
	for(j=0;j<y;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("elements of a:\n");
	for(i=0;i<x;i++)
	{
	for(j=0;j<y;j++)
	{
		printf("%d ",a[i][j]);
	}
}
printf("\n");	

return 0;
}
