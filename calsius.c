#include<stdio.h>
int temp()
{
	float c,f;
	printf("enter temperature in farenheit: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The temperature in calsius is %f ",c);
}
int main()
{
	temp();
	return 0;
}
