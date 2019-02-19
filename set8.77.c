#include<stdio.h>
#include<conio.h>
void main()
{
int c,i;
clrscr();
scanf("%d",&c);
for(i=1;i<=c;i++)
{
if(c%i==0)
{
printf(" %d",i);
}
}
getch();
}
