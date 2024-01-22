#include<stdio.h>
void  main()
{
	int m[6][6],i,j,sum=0,M,n;
	//clrscr;
	printf("enter the order of sq. matrix:");
	scanf("%d%d",&M,&n);
	if(M>6 || n>6)
	{
		printf("\n the order is out of range");
		getch();
		//exit();
	}
	if(M!=n)
	{
		printf("\n not square matrix");
		getch();
	//	exit();
	}
	printf("enter the elements of sq. matrix:");
	for(i=0;i<M;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf(" the  matrix is :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			sum=sum+m[i][j];
		}
	}
printf("\n the sum of upper triangle is: %d",sum);	

}

