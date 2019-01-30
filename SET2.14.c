#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,i;
clrscr();
scanf("%d%d",&n,&s);
for(i=n+1;i<s;i++)
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
getch();
}
