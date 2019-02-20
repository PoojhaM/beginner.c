#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,s=0,s1=0;
clrscr();
scanf("%d%d%d",&l,&b,&h);
s=2*l*b+2*l*h+2*b*h;
s1=l*b*h;
printf("%d %d",s,s1);
getch();
}
