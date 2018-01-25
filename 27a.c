#include<stdio.h>
#include<string.h>
void main()
{
	char x[10];
	int i,m,count=0;
	scanf("%s",x);
	m=strlen(x);
	for(i=0;i<m;i++)
	{
	if(x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'||x[i]=='0')
{
	count++;
}
}
	if(count==0)
	{
	printf(" not a numeric number");
	}
	else
	printf(" numeric number");
  return 0;
	}
