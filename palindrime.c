#include<stdio.h>
#include<math.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==temp)
	{
	printf("Given number is palindrome");
}
	else
	{
		printf(" Given number is not palindrome");
	}
	return 0;
}
