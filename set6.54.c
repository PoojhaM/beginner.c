#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0;
clrscr();
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else if(n%2!=0)
{
i=n-1;
printf("%d",i);
}
getch();
}
