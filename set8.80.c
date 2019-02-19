#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,b[20],i=0,t=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
if(rem%2!=0)
{
b[i]=rem;
i++;
}
n=n/10;
}
t=i;
b[i]='\0';
for(i=t-1;i>=0;i--)
{
printf("%d",b[i]);
}
getch();
}
