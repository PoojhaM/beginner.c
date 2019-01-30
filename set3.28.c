#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,x;
clrscr();
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
printf("%d %d",a[i],i);
printf("\n");
}
getch();
}
