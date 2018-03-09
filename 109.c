#include<stdio.h>
int main()
{
	int s[10],j,min;
	for(j=0;j<10;j++)
	scanf("%d",&s[j]);
	min=s[0];
	for(j=0;j<10;j++)
	{
		if(s[j]<min)
		{
			min=s[j];
		}
	}
	printf("%d",min);
}
