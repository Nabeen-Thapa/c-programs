#include<stdio.h>
#include<stdlib.h>
int blacktea=50,milktea=70,vegmomo=150,hotandsoursoup=100,manchosoup=110,pizza=400,burger=100,samosa=35;
int chhoyala=120,chickenpizza=500,chickentanduri=190,sukuti=200,chickenmomo=250,buffmomo=200;
int num,i,total;
void price();
void finalbill();
int totalamount();
void date();

struct bill
{
char item[20];
int num;	
};
struct bill b[100];
int main()
{
	printf("                      Items list                       ");
	printf("\n\t------------------------------------------------------\n\n");
	printf("                     items for vegeterian                      ");
	printf("\n\n\tblack tea..........................................Rs.50");
	printf("\n\tmilk tea.............................................Rs.70");
	printf("\n\tveg momo.............................................Rs.150");
	printf("\n\thot and sour soup....................................Rs.100");
	printf("\n\tmancho soup..........................................Rs.110");
	printf("\n\tpizza................................................Rs.400");
	printf("\n\tburger...............................................Rs.100");
	printf("\n\tsamosa...............................................Rs.35\n\n");
	printf("                   items for non-vegeterian                     ");
	printf("\n\n\tblack tea..........................................Rs.50");
	printf("\n\tmilk tea.............................................Rs.70");
	printf("\n\tchicken momo.........................................Rs.250");
	printf("\n\tbuff momo............................................Rs.200");
	printf("\n\tchhoyala.............................................Rs.120");
	printf("\n\tchicken pizza........................................Rs.500");
	printf("\n\tchicken tanduri......................................Rs.190");
	printf("\n\tsukuti...............................................Rs.200");
	
printf("\n\nhow many items do you choose: ");
scanf("%d",&num);
printf("\nenter the name of items with out any space");
for(i=0;i<num;i++)
{
printf("\n\nentr name of your item %d: ",1+i);
scanf("%s",&b[i].item);	
printf("enter how many plates(or pices): ");
scanf("%d",&b[i].num);
price();
}
printf("\n\n");
finalbill(); 
printf("\n");
totalamount();
printf("\n\n\t\t\tHope you get best items for you");
printf("\n\t\t\t     Please Visit again");
printf("\n\t\t\t\t Thank you!! ");

return 0;
}
void finalbill()            //to show the items list and total price of that iten that order by costumer
{
printf("\n\n\t\t\t\t\tNew NT hotel  \n");
printf("\n\t\t\t\t your final bill a mount\n");
 date();
printf("\nitems that you order:\n");
printf("\tItems\t\t\tprice(per)\tNo. of items\t  total price");
printf("\n---------------------------------------------------------------------------------");
for(i=0;i<=num;i++)
{
if(strcmp(b[i].item,"blacktea")==0)
    printf("\n\tblack tea\t\t%d\t\t  %d\t\t\t%d",blacktea,b[i].num,blacktea*b[i].num);
    if(strcmp(b[i].item,"milktea")==0)
	printf("\n\tmilk tea\t\t%d\t\t  %d\t\t\t%d",milktea,b[i].num,milktea*b[i].num);
	else if(strcmp(b[i].item,"vegmomo")==0)
	printf("\n\tveg momo\t\t%d\t\t  %d\t\t\t%d",vegmomo,b[i].num,vegmomo*b[i].num);
	else if(strcmp(b[i].item,"hotandsoursoup")==0)
	printf("\n\thot and sour soup\t%d\t\t  %d\t\t\t%d",hotandsoursoup,b[i].num,hotandsoursoup*b[i].num);
	else if(strcmp(b[i].item,"manchosoup")==0)
	printf("\n\tmacho soup\t\t%d\t\t  %d\t\t\t%d",manchosoup,b[i].num,manchosoup*b[i].num);
	else if(strcmp(b[i].item,"pizza")==0)
	printf("\n\tpizza\t\t\t%d\t\t  %d\t\t\t%d",pizza,b[i].num,pizza*b[i].num);
	else if(strcmp(b[i].item,"burger")==0)
	printf("\n\tburger\t\t\t%d\t\t  %d\t\t\t%d",burger,b[i].num,burger*b[i].num);
	else if(strcmp(b[i].item,"samosa")==0)
	printf("\n\tsamosa\t\t\t%d\t\t  %d\t\t\t%d",samosa,b[i].num,samosa*b[i].num);
	else if(strcmp(b[i].item,"chickenmomo")==0)
	printf("\n\tchicken momo\t\t%d\t\t  %d\t\t\t%d",chickenmomo,b[i].num,chickenmomo*b[i].num);
	else if(strcmp(b[i].item,"buffmomo")==0)
	printf("\n\tbuff momo\t\t%d\t\t  %d\t\t\t%d",buffmomo,b[i].num,buffmomo*b[i].num);
	else if(strcmp(b[i].item,"chhoyala")==0)
    printf("\n\tchhoyala\t\t%d\t\t %d\t\t\t%d",chhoyala,b[i].num,chhoyala*b[i].num);
	else if(strcmp(b[i].item,"chickenpizza")==0)
	printf("\n\tchicken pizza\t\t%d\t\t  %d\t\t\t%d",chickenpizza,b[i].num,chickenpizza*b[i].num);
	else if(strcmp(b[i].item,"chickentanduri")==0)
	printf("\n\tchicken tanduri\t\t%d\t\t  %d\t\t\t%d",chickentanduri,b[i].num,chickentanduri*b[i].num);
	else if(strcmp(b[i].item,"sukuti")==0)
	printf("\n\tsukuti\t\t\t%d\t\t  %d\t\t\t%d",sukuti,b[i].num,sukuti*b[i].num);
}
}
int totalamount()                  //for grand total amount
{
	int total=0;
printf("\n---------------------------------------------------------------------------------\n");
for(i=0;i<=num;i++)
{
	if(strcmp(b[i].item,"blacktea")==0)
	total=total+blacktea*b[i].num;
	if(strcmp(b[i].item,"milktea")==0)
	total=total+milktea*b[i].num;
	else if(strcmp(b[i].item,"vegmomo")==0)
	total=total+vegmomo*b[i].num;
	else if(strcmp(b[i].item,"hotandsoursoup")==0)
	total=total+hotandsoursoup*b[i].num;
	else if(strcmp(b[i].item,"manchosoup")==0)
	total=total+manchosoup*b[i].num;
	else if(strcmp(b[i].item,"pizza")==0)
	total=total+pizza*b[i].num;
	else if(strcmp(b[i].item,"burger")==0)
	total=total+burger*b[i].num;
	else if(strcmp(b[i].item,"samosa")==0)
	total=total+samosa*b[i].num;
	else if(strcmp(b[i].item,"chickenmomo")==0)
	total=total+chickenmomo*b[i].num;
	else if(strcmp(b[i].item,"buffmomo")==0)
	total=total+buffmomo*b[i].num;
	else if(strcmp(b[i].item,"chhoyala")==0)
	total=total+chhoyala*b[i].num;
	else if(strcmp(b[i].item,"chickenpizza")==0)
	total=total+chickenpizza*b[i].num;
	else if(strcmp(b[i].item,"chickentanduri")==0)
	total=total+chickentanduri*b[i].num;
	else if(strcmp(b[i].item,"sukuti")==0)
	total=total+sukuti*b[i].num;
		
}
      printf("\tTotal\t\t\t\t\t\t\t\t%d",total);       

}


	
	void price()                  //to show the price of item after iter enter
	{
	if(strcmp(b[i].item,"blacktea")==0)
	printf("your amount for black tea is %d",blacktea*b[i].num);
	else if(strcmp(b[i].item,"milktea")==0)
	printf("your amount for milk rea tea is %d",milktea*b[i].num);
	else if(strcmp(b[i].item,"vegmomo")==0)
	printf("your amount for veg momo is %d",vegmomo*b[i].num);
	else if(strcmp(b[i].item,"hotandsoursoup")==0)
	printf("your amount for hot and sour soup is %d",hotandsoursoup*b[i].num);
	else if(strcmp(b[i].item,"manchosoup")==0)
	printf("your amount for manchosoup is %d",manchosoup*b[i].num);
	else if(strcmp(b[i].item,"pizza")==0)
	printf("your amount for pizza is %d",pizza*b[i].num);
	else if(strcmp(b[i].item,"burger")==0)
	printf("your amount for burger is %d",burger*b[i].num);
	else if(strcmp(b[i].item,"samosa")==0)
	printf("your amount for samosa is %d",samosa*b[i].num);
	else if(strcmp(b[i].item,"chickenmomo")==0)
	printf("your amount for chicken momo is %d",chickenmomo*b[i].num);
	else if(strcmp(b[i].item,"buffmomo")==0)
	printf("your amount for buff momo is %d",buffmomo*b[i].num);
	else if(strcmp(b[i].item,"chhoyala")==0)
	printf("your amount for chhoyala is %d",chhoyala*b[i].num);
	else if(strcmp(b[i].item,"chickenpizza")==0)
	printf("your amount for chicken pizza is %d",chickenpizza*b[i].num);
	else if(strcmp(b[i].item,"chickentanduri")==0)
	printf("your amount for chicken tanduri is %d",chickentanduri*b[i].num);
	else if(strcmp(b[i].item,"sukuti")==0)
	printf("your amount for sukuti is %d",sukuti*b[i].num);
	else
	printf("sorry we don't have this item\n");
}
void date()
{
	time_t current_time=time(NULL);
	struct tm*tm=localtime(&current_time);
	printf("\n\t\t\tDate:\t%s\n",asctime(tm));
}

