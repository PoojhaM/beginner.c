#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i=0,rem=0,j;
clrscr();
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
a[i]=rem;
i++;
n=n/10;
}
for(j=i-1;j>=0;j++)
{
printf("%d",a[j]);
}
getch();
}
