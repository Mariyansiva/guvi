#include <stdio.h>
int main(void) 
{
	int fact=1, x,i;
	scanf("%d",&x);
	printf("%d\n",x);
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
