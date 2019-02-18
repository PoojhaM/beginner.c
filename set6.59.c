#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
scanf("%d",&n);
while(n!=0)
{
    c++;
    n=n/10;
}
printf("%d",c);
getch();
}
