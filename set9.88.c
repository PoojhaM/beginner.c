#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,m;
clrscr();
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
m=n1;
}
else
{
m=n2;
}
while(1)
{
if(m%n1==0 && m%n2==0)
{
printf("%d",m);
break;
}
++m;
}
getch();
}
