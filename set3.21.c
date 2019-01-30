#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,d,i,sum=0;
clrscr();
scanf("%d%d%d",&a,&n,&d);
sum=(n*(2*a+(n-1)*d))/2;
t=a+(n-1)*d;
printf("sum of A.P is:");
for(i=0;i<=t;i=i+d)
{
if(i!=t)
{
printf("%d+",t);
}
else
{
printf("%d=%d",i,suum);
}
}
getch();
}
