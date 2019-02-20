#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,s1=1,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
s1=s1*n;
}
printf("%d",s1);
getch();
}
