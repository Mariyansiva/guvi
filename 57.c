
#include <stdio.h>

int main()
{
    int a,b;
    int temp;
    printf("enter the values");
    scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("enter swaped values%d\t%d",a,b);
    return 0;
}

