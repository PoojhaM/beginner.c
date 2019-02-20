#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,d=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
{
d=0;
}
else
{
d=1;
break;
}
}
if(d==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
