//append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fp;
 char name[5][10];
 int i;
 fp=fopen("d:\\record.txt","w");
 if(fp==NULL)
 {
     printf("file not created");
     exit(1);
 }
 printf("enter name of the people");
 for(i=0;i<5;i++)
 {

 scanf("%s",name[i]);
 fputs(name[i],fp);
 }
 return 0;
}
