#include<stdio.h>
int main()
{
	int i,j,s,temp;
	int a[1000];
	printf("enter the no\n");
	scanf("%d",&s);
	printf("enter the array of n no \n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
		printf("%d\t",a[i]);
		}
	return 0;
}
