#include<stdio.h>
#include<conio.h>
void main()
{
int min,h,m,x;
printf("enter min:");
scanf("%d",&min);
h=(min/3600);
m=(min-(3600*h))/60;
x=(min-(3600*h)-(m*60));
printf("h:m:x-%d:%d:%d\n",h,m,x);
getch();
