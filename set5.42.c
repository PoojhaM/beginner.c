#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],c[20];
int l1,l2;
clrscr();
gets(a);
gets(c);
l1=strlen(a);
l2=strlen(c);
if(l1>l2)
{
printf("%s",a);
}
else if(l1<l2)
{
printf("%s",c);
}
else
{
printf("%s",c);
}
getch();
}
