#include<stdio.h>
#include<conio.h>
void main()
{
int x,a=0,b=1,c;
clrscr();
scanf("%d",&x);
printf("%d ",b);
while(x-1)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
x--;
}
getch();
}

