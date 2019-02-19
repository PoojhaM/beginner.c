#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i=0,c=0,n=0,b=0;
clrscr();
gets(a);
while(a[i]!='\0')
{
i++;
c++;
}
if(c%2==0)
{
a[c/2]='*';
a[(c/2)-1]='*';
}
else
{
a[c/2]='*';
}
for(i=0;i<c;i++)
{
printf("%c",a[i]);
}
getch();
}
