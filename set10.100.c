#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,mul=1;
clrscr();
scanf("%d",&n);
while(n)
{
r=n%10;
mul=mul*r;
n=n/10;
}
printf("%d",mul);
getch();
}
