#include<stdio.h>
#include<conio.h>
void main()
{
int a,b1;
clrscr();
scanf("%d%d",&a,&b1);
while(a!=b1)
{
if(a>b1)
{
a=a-b1;
}
else
{
b1=b1-a;
}
}
printf("%d",a);
getch();
}
