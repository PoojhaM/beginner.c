#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,s=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("%d",s);
getch();
}
