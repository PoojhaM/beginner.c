#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int calpha,cdigit,cspecial,cspace;
int x;
cdigit=calpha=cspecial=cspace=0;
printf("enter a string");
gets(str);
for(x=0;str[x]!=NULL;x++)
{
if(str[x]>='0' && str[x]<='9')
cdigit++;
else if((str[x]>='A' && str[x]<='Z')||(str[x]>='a' && str[x]<='z'))
calpha++;
else if(str[x]==' ')
cspace++;
else
cspecial++;
}
printf("%d",cspecial);
getch();
}
