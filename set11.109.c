#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,k1,m,i,o=0,b=0,j;
clrscr();
scanf("%d%d",&n,&k1);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
b=n+1-k1;

for(i=0;i<b;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<m)
{
m=a[i];
o=i;
}
}
a[o]='\0';
}
printf("%d",m);
getch();
}

