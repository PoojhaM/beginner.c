#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],max,i,x;
clrscr();
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
max=0;
for(i=0;i<x;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
getch();
}
