#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0,temp,rem=0;
clrscr();
scanf("%d%d",&a,&b);
for(i>a;i<b;i++)
{
temp=a;
while(a!=0)
{
rem=a%10;
b=pow(rem,3);
sum=sum+b;
a=a/10;
printf("%d",sum);
}
}
getch();
}
