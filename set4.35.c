#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30];
int x,count=0,n;
clrscr();
scanf("%[^\t\n]s",a);
n=strlen(a);
for(x=0;x<n;x++)
{
if(a[x]>='0' && a[x]<='9')
{
count++;
}
}
printf("%d",count);
getch();
}
