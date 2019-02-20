#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],k1,n1,i;
clrscr();
scanf("%d%d",&n1,&k1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(i==k1-1)
{
printf("%d",a[i]);
}
}
getch();
}
