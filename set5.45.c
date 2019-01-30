#include<stdio.h>
#include<conio.h>
void main()
{
int x,count=0;
clrscr();
scanf("%d",&x);
while(x)
{
x=x/10;
count++;
}
printf("%d",count);
getch();
}
