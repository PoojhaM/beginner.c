/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
	char a[50][50],b[60];
	int n,i,k=0,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}

	for(i=0;i<n;i++)
	{
		c=1;
		for(j=0;j<n-1;j++)
		{
			if(a[j][i]==a[j+1][i])
			{
				c++;
			}
			else
			{
				c=0;
				break;
			}

		}
		if(c==n&&c!=0)
		{
			b[k]=a[j][i];
			k++;
		}
		else if(c==0)
		break;
	}
	b[k]='\0';
	printf("%s",b);
	return 0;
}


