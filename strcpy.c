#include<stdio.h>
#include<string.h>
int main()
{
	char cpy[20],cpy2[20];
	printf("enter for the output: ");
	puts(cpy);	
	printf("enter another for the output: ");
	puts(cpy2);
	printf("opy is:%s",strcpy(cpy2,cpy));
	return 0;
}
