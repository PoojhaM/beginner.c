#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],min,max=0,i,x;
clrscr();
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
max=0;
for(i=0;i<x;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
for(i=0;i<x;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d %d",min,max);
getch();
}

