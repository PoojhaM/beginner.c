#include<stdio.h>
#include<conio.h>
void main()
{
int x=10,min,a[20],i;
clrscr();
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<x;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
getch();
}
