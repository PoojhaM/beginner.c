#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int x,count=0;
clrscr();
gets(str);
for(x=0;str[x]!='\0';x++)
{
if(str[x]!=' ')
{
count++;
}
}
printf("%d",count);
getch();
}
