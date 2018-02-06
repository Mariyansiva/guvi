
#include<stdio.h>
void main()
{
 char x[30];
 int i, count=1;
 printf("enter a sentence");
 scanf("%[^\n]s",&x);
 for(i=0;x[i]!='\0';i++)
 {
 if(x[i]==' ')
 {
 count=count+1;
 }
 }
 printf("number of words=%d",count);

}
