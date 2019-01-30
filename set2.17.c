#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,sum=0,rem=0,y=0,temp;
clrscr();
printf("enter a number:");
scanf("%d",&x);
temp=x;
while(x!=0)
{
rem=x%10;
b=pow(rem,3);
sum=sum+y;
x=x/10;
}
if(sum==temp)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
