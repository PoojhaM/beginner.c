#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],max,x,n;
clrscr();
scanf("%d",&n);
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
max=0;
for(x=0;x<n;x++)
{
if(a[x]>max)
{
max=a[x];
}
}
printf("%d",max);
getch();
}
