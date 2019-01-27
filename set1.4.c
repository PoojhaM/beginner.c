#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%c",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("alphabet");
}
else
{
printf("not");
}
t--;
}
getch();
}
