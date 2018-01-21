#include<stdio.h>
	int main()
	{
	int num,x,temp,sum=0;
	printf("enter an no: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	r=num%10;
	num=num/10;
	sum=sum+(x*x*x);
	}
	if(sum==temp)
	{
	printf("%d is a armstrong",temp);
	}
	else
	{
	printf("%d is not an armstrong",temp);
	}
	return 0;
  }
