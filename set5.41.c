#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int x;
clrscr();
gets(a);
scanf("%d",&x);
while(x)
{
printf("%s",a);
x--;
printf("\n");
}
getch();
}
