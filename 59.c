#include<stdio.h>
int main()
{
	int s[10],j,max;
	for(j=0;j<10;j++)
	scanf("%d",&s[j]);
	max=s[0];
	for(j=0;j<10;j++)
	{
		if(s[j]>max)
		{
			max=s[j];
		}
	}
	printf("%d",max);
}
