//current date and time
#include<stdio.h>
#include<conio.h>
#include<time.h>
void date();
int main()
{
	date();
	return 0;
}

void date()
{
	time_t current_time=time(NULL);
	struct tm*tm=localtime(&current_time);
	printf("%s\n",asctime(tm));
}

