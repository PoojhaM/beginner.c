#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int x,count=0;
clrscr();
gets(a);
for(x=0;a[x]!='\0';++)
{
if(a[x]==' ')
{
count++;
}
}
printf("%d",count);
getch();
}
