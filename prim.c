#include<stdio.h>
void main()
{
int b,i,count=0;
printf("enter a number");
scanf("%d",&b);
for(i=2;i<b;i++)
{
if((b%i)==0)
count++;
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
