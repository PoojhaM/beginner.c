#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,temp,x;
clrscr();
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
for(j=i+1;j<x;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<x;i++)
{
printf("%d ",a[i]);
}
getch();
}

