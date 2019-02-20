#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],x,i,j=1;
clrscr();
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
if(a[i]!=j)
{
printf("%d",i);
break;
}
j++;
}
getch();
}
