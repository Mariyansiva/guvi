#include<stdio.h>
void main()
{
  int i,count=0;
  char x[200];
  scanf("%[^\n]s",x);
  for(i=0;x[i]!=NULL;i++)
  {
  	if(x[i]==' ')
  	{
  		count++;
  	}
  	
  }
  printf("%d",count);

}
