#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,s=0,d=0,i,b=0;
clrscr();
scanf("%d%d",&n,&m);
s=n*m;
for(i=1;i<50;i++)
{
if(i*i==s)
{
d=0;
break;
}
else
{
d=1;
}
}
if(d==0)
printf("yes");
else
printf("no");
getch();
}
