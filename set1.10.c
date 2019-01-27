#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,count=0;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("%d",count);
t--;
}
getch();
}
