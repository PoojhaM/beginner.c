#include<stdio.h>
#include<conio.h>
void main()
{
int t,n,i=1,sum=0;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
while(i<=n);
{
sum=sum+i;
i++;
}
printf("%d",sum);
t--;
}
getch();
}
