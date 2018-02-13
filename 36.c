
#include <stdio.h>

int main() 
{
	char x[50];
	int i,count=0;

	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++)
	{
		if(!((x[i]>='0' && x[i]<='9')||(x[i]>='a' && x[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
