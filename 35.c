#include <stdio.h>
#include<string.h>
int main(void) {
	char d[500];
    int i,l=0,count=0;
    scanf("%s",d);
    l=strlen(d);
     for(i=0;i<l;i++)
{
if(d[i]>='0' && d[i]<='9')
count++;
}
printf("%d",count);
	return 0;
}
