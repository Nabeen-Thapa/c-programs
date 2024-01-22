//calculator
#include<stdio.h>
#include<stdlib.h>
void addition();
void subtraction();
void division();
void multiplication();
void modulation();
int num,i,number,sum=0,j;
int main()
{
	int operation;
	printf("enter what you want to perform");
	printf("\n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division \n 5. modulation");
	printf("\n choose the operation: ");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:
           addition();
           break;
        case 2:
           subteraction();
           break;
        case 3:
            division();
            break;
        case 4:
            multiplication();
            break;
        case 5:
            modulation();
            break;
        default:
			printf("wrong entry");
			
return 0;	
}

void addition()
{
	printf("how many numbers you want to add: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  sum=sum+number;    
    }
		printf("\n sum of %d numbers = %d",num,sum);

}

void subtraction()
{
	int sub;
	printf("how many numbers you want to subtract: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  sub=sub-number;    
    }
		printf("\n subtraction of %d numbers = %d",num,sub);

}

void division()
{
	int div;
	printf("how many numbers you want to divide: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  div=div/number;    
    }
		printf("\n division of %d numbers = %d",num,div);

 }

void multiplication()
{
	int mul;
	printf("how many numbers you want to multiply: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  mul=mul*number;    
    }
		printf("\n multiplication of %d numbers = %d",num,mul);

}

void modulation()
{
	int mod;
	printf("how many numbers you want to mudulate: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  mod=mod%number;    
    }
		printf("\n modulation of %d numbers = %d",num,mod);
  }



