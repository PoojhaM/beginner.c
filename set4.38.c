#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int n1,n2;
clrscr();
scanf("%d%d",&n1,&n2);
swap(&nu1,&n2);
printf("%d %d",n1,n2);
getch();
}
void swap(int *x,int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
