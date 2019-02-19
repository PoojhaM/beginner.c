#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,d=0;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
d=1;
break;
}
}
if(d==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
