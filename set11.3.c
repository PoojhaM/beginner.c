#include<stdio.h>
#include<conio.h>
void main()
{
char n
int t;
clrscr();
scanf("%d",&t);
while(t>0)
{
scanf("%c",&n);
if(n=='a'&&n=='e'&&n=='i'&&n=='o'&&n=='u'||n=='A'&&n=='E'&&n=='I'&&n=='O'&&n=='U')
{
printf("vowel")
}
else
{
printf("consonant");
}
t--;
}
getch();
}
