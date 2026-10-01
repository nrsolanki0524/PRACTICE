#include<stdio.h>
#include<conoi.h>
void main()
{
int no,num,ori,rem,res=0,i,count=0,neon,sum,temp,r,a=0,b=1,c,fact;
clrscr();
printf(("1.amstrong number.\n");
printf("2.prime number.\n");
printf("3.pelindrom number.\n");
printf("4.neon number.\n");
printf("5.fibo series.\n");
printf("6.completely divisible by 7.\n");
printf("7.factorial.\n");
printf("8.exit.\n");
printf("enter the case number:");
scanf("%d",&no);
switch(no)
{
case 1:
printf("enter the number:");
scanf("%d",&num);
ori=num;
