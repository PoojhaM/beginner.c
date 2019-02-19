#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i,x=0;
clrscr();
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0' || s[i]=='1')
{
x=0;
}
else
{
x=1;
break;
}
}
if(x==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
