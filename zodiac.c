#include<stdio.h>
int main()
{
	int year,month,day;
	printf("enter your birthday year, month(1-12) and day(1-31): ");
	scanf("%d%d%d",&year,&month,&day);
	if(month<=12 && day<=31)
	{
	if(month==1 && day>=14 || month==2 && day<=12)
	{
		printf("congratulation your zodiac sign is capricorn\n");
	}
	else if(month==2 && day>=13 || month==3 && day<=13)
	{
		printf("congratulation your zodiac sign is Aquarius\n");
	}
	else if(month==3 && day>=14 || month==4 && day<=13)
	{
		printf("congratulation your zodiac sign is Pisces\n");
	}
	else if(month==4 && day>=14 || month==5 && day<=14)
	{
		printf("congratulation your zodiac sign is Aries\n");
	}
	else if(month==5 && day>=15 || month==6 && day<=14)
	{
		printf("congratulation your zodiac sign is Taurus\n");
	}
	else if(month==6 && day>=15 || month==7 && day<=15)
	{
		printf("congratulation your zodiac sign is Gemini\n");
	}
	else if(month==7 && day>=16 || month==8 && day<=16)
	{
		printf("congratulation your zodiac sign is Cancer\n");
	}
	else if(month==8 && day>=17 || month==9 && day<=16)
	{
		printf("congratulation your zodiac sign is Leo\n");
	}
	else if(month==9 && day>=17 || month==10 && day<=16)
	{
		printf("congratulation your zodiac sign is Virgo\n");
	}
	else if(month==10 && day>=17 || month==11 && day<=12)
	{
		printf("congratulation your zodiac sign is Libra\n");
	}
	else if(month==11 && day>=16 || month==12 && day<=15)
	{
		printf("congratulation your zodiac sign is Scorpio\n");
	}
	else if(month==12 && day>=16 || month==1 && day<=13)
	{
		printf("congratulation your zodiac sign is Sagittarius\n");
	}
}
	else
	{
		printf("wrong entry");
	}
	return 0;
}
