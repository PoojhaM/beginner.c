#include<stdio.h>
#include<conio.h>
void main()
{
char a1[20];
int n;
clrscr();
gets(a1);
for(n=0;a1[n]!='\0';n++)
{
if(a1[n]>='0' && a1[n]<='9')
{
printf("%c",a1[n]);
}
}
getch();
}
