#include<stdio.h>
int main()
{
	int n,i,x=0,y=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",y);
		sum=x+y;
		x=y;
		y=sum;
	}
	
}
