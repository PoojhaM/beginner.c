#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int l=0,i,c=0;
clrscr();
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if((a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')&&(a[i]>=48&&a[i]<=57))
{
c++;
}
}
if(c==l)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
