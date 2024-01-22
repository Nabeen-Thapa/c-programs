#include<stdio.h>
int main()
{
int row,col,sp,n,no;
printf("enter row");
scanf("%d",&no);
for(row=0;row<no;row++)
{
for(sp=0;sp<(no-row);sp++)
{
printf(" ");
}
n=1;
for(col=0;col<=row;col++)
}
printf("%d",n);
return 0;
}
