#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i=0,cou=0,d=0;
clrscr();
gets(a);
while(a[i]!='\0')
{
i++;
cou++;
}
for(i=0;i<cou;i++)
{
if(a[i]>='a' && a[i]<='z')
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
printf("yes");
}
else
{
printf("no");
}
getch();
}
