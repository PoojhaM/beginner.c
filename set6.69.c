#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,des=0;
clrscr();
scanf("%d%d",&n,&m);
if(n>m)
{
des=n-m;
}
else
{
des=m-n;
}
if(des%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
