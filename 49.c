#include<stdio.h>
void main()
{
    int x[10],s,i,sum=0,avg;
    printf("Enter the number");
    scanf("%d",&s);
    printf("Enter the array numbers");
    for(i=0;i<s;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<s;i++)
    {
        sum+=x[i];
    }
    avg=sum/s;
    printf("The average is %d",avg);
}
