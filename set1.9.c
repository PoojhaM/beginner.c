#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int n,k,t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
while(i<=k)
{
sum=sum+a[i];
i++;
}
printf("%d",sum);
t--;
}
getch();
}
