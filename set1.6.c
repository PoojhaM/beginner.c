#include<stdio.h>
#include<conio.h>
void main()
{
int n,t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%",&n);
if((n%4==0&&n/00!=0)||(n%400==0))
{
printf("leap year");
}
else
{
printf("not");
}
t--;
}
getch();
}
