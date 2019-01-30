#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=1,pow=2,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s*pow;
if(s==n)
{
printf("yes");
}
}
if(s!=n)
{
printf("no");
}
getch();
}
