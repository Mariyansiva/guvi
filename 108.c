#include<stdio.h>
int main()
{ 
    int x,y,n,sum=0,next=0,i;
    printf("enter the number");
	scanf("%d%d%d",&x,&y,&n);
next=x;
for(i=0;i<n;i++)
{
    sum=sum+next;
    next=next+y;
}
printf("\n %d",sum);

}
