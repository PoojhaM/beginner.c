#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,mul;
clrscr();
scanf("%d",&n,&m);
mul=n*m;
if(mul%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
