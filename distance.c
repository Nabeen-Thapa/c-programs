#include<stdio.h>
int main()
{
	int km,meter,cm;
	printf("enter the distance between cities(in km): ");
	scanf("%d",&km);
	meter=km*1000;
	cm=meter*100;
	printf("the distance between two cities is:\n %d in meter and \n %d in centimter ",meter,cm);
	return 0;
}
