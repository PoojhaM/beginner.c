#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],min,max=0,j,n;
clrscr();
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
min=a[0];
max=0;
for(j=0;j<n;j++)
{
if(a[j]>max)
{
max=a[j];
}
}
for(j=0;j<n;j++)
{
if(a[j]<min)
{
min=a[j];
}
}
printf("%d %d",min,max);
getch();
}

