#include<stdio.h>
int main()
{
	int i,j,k,A[3][3],B[3][3],mul[3][3];
	printf("enter the elements for matrix A: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++);
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("entert the value for matrix B: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("multplication of the two matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    mul[i][j]=0;
		    for(k=0;k<3;k++)
		    {
		    	mul[i][j]=mul[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
