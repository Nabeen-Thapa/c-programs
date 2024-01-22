// sum of sequence 1/1! + 2/2! + 3/3! +...........n/n!
#include<stdio.h>
int main()
{
int n,i,j,fact=1;
float sum=0;
printf("enter the number for sequence sum: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i;j++)
fact*=j;
sum=sum+(float)i/fact;	
}
printf("sum = %f",sum);
return 0;
}
