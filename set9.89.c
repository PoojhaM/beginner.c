#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],temp[30];
int i,j,k1=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>a[j])
{
temp[k1]=a[i];
a[i]=a[j];
a[j]=temp[k1];
}
}
}
printf("\n%s",a);
getch();
}
