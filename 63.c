

#include <stdio.h>
#include<string.h>
int main(void)

{
	int i,x,count=1,j;
	char z[100];
	gets(z);
	x=strlen(z);
	for(i=0;i<x;i++)
	{
		if(z[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
