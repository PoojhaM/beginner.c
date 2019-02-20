#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s1=0;
clrscr();
scanf("%d",&n);
while(n)
{
r=n%10;
s1=s1*10+r;
n=n/10;
}
printf("%d",s1);
getch();
}
