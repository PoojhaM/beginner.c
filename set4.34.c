#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int x,count=1;
clrscr();
gets(a);
for(x=0;a[x]!='\0';x++)
{
if(a[x]=='.')
{
count++;
}
}
printf("%d",count);
getch();
}
