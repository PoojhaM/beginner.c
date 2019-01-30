#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,x,sum=0,avg=0;
clrscr();
scanf("%d",&n);
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
for(x=0;x<n;x++)
{
sum=sum+a[x];
}
avg=sum/n;
printf("%d",avg);
getch();
}
