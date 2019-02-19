#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,x=0;
clrscr();
scanf("%d%d",&n,&m);
x=n+m;
if(x%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
