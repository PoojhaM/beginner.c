#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d",a);
}
else if(b>a&&b>c)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
t--;
}
getch();
}
