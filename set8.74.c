#include<stdio.h>
#include<conio.h>
void main()
{
float n,k=0.1;
int s,i=0;
clrscr();
scanf("%f",&n);
for(i=0;i<9;i++)
{
s=(int)(n+k);
if(s>n)
{
printf("%d",s);
break;
}
else
{
k=k+0.1;
}
}
getch();
}
