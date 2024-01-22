#include<stdio.h>
#include<stdlib.h> //for rand
#include<time.h> //for time fn
int main()
{
int number,guess,nguesses=1;
srand(time (0));//return time for diff num
number=rand()%100+1; // generate a random number 1 to 100
//printf(" the num is %d",number);
// keep running the loop untill the num is gussed
do {
	printf("guess the num between 1 to 100: ");
	scanf("%d",&guess);
	if(guess>number)
{
	printf("lower num plz!\n");
}
else if(guess<number)
{
	printf("higher num plz \n");
}
else
{
	printf("you guessed it in %d attempts\n",nguesses);

}
nguesses++;
}while(guess!=number);
printf(" the num is %d",number);
return 0;
}
