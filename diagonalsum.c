#include<stdio.h>
void main()
{
int m[3][3],i,j,M,N,sum=0;

printf("enter the 3 x 3 matrix:");
scanf("%d%d",&M,&N);
if(M>3 || N>3)
{
	printf("out of range");
	getch();
	//exit();
}
if(M!=N)
{
	printf("not square");
	getch();
//	exit();
}
printf("enter the elements: ");
for(i=0;i<M;i++)
{
	for(j=0;j<N;j++);
	{
		scanf("%d",&m[i][j]);
	}
}
printf("matrix is\n");
for(i=0;i<M;i++)
{
	for(j=0;j<N;j++);
	{
		printf("%d",&m[i][j]);
	}
	printf("\n");
}
for(i=0;i<M;i++)
{
	for(j=0;j<N;j++);
	{
	if(i==j)
	sum=sum+m[i][j]*m[i][j];	
	}
}
printf("the sum of diagonal is:%d",sum);		
}
