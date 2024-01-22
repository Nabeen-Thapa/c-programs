/* Program to demonstrate sorting in structure typel*/
#include<stdio.h>
#include<string.h>
struct cricket
{
	char pname[20];
	char paddress[40];
	int age;
}player[3],temp;
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("\nEnter player Name:");
		scanf("%s",player[i].pname);
		printf("Enter Player Address");
		scanf("%s",player[i].paddress);
		printf("Enter Player Age");
		scanf("%d",&player[i].age);
	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<3-i;j++)
		{
			if(strcmp(player[i].pname,player[j+1].pname)>0)
			{
				temp=player[i];
				player[i]=player[j+1];
				player[j+1]=temp;
			}
		}
	}
		for(i=0;i<3;i++)
	{
		printf("\n%s\t\t%s\t\t%d",player[i].pname,player[i].paddress,player[i].age);
	}
	return 0;
}
