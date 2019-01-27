#include<stdio.h>
#include<conio.h>
void main()
{
int n,t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
if(n%2==0)
{
printf("even");
}
else
{
printf("odd");
}
t--;
}
getch();
}
