#include<stdio.h>
#include<conio.h>
void main()
{
int a,x,temp;
clrscr();
scanf("%d%d",&a,&x);
temp=a;
a=x;
x=temp;
printf("%d %d",a,x);
getch();
}
