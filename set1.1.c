#include <stdio.h>
#include<conio.h>
void main()
{
    int n,t;
    clrscr();
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        if(n>0)
    {
        printf("positive");
    }
    else if(n<0)
    {
        printf("negtive");
    }
    else
    {
        printf("zero");
    }
    t--;
    }
    getch();
}
