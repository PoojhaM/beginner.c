#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(b>a&&a>c||c>a&&a>b)
{
printf("%d",a);
}
else if(a>b&&b>c||c>b&&b>a)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
getch();
}
