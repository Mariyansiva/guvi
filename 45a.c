#include<stdio.h>
int main()
{
int num,count=0;
printf("\n Enter the numeric number");
scanf("%d",&num);
while(num!=0)
{
count+=1;
num=num/10;
}
printf("\n count is %d",count);
return 0;
}
