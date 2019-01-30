#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i;
clrscr();
scanf("%d%d",&x,&y);
for(i=x+1;i<y;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
getch();
}
