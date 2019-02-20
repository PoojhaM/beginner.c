#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t1,i=0,d[20];
clrscr();
printf("enter no of num sets:");
scanf("%d",&t1);
while(t1)
{
scanf("%d%d",&a,&b);
if(a<b)
{
c=b-a;
}
else if(a>b)
{
c=a-b;
}
d[i]=c;
i++;
t1--;
}
d[i]='\0';
for(i=0;d[i]!='\0';i++)
{
printf("%d",d[i]);
printf("\n");
}
getch();
}
