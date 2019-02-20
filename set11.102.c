#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
scanf("%d",&i);
if(i%2==0)
{
i=i/2;
printf("%d",i);
}
else
{
printf("%d",i);
}
getch();
}
