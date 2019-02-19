#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30],c[20];
clrscr();
gets(a);
strcpy(c,a);
strrev(c);
if(strcmp(a,c)==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
