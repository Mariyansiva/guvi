
#include <stdio.h>

int main()
{
    int a,x,b;
    int add;
    printf("the no is:");
    scanf("%d",&a);
    printf("the no is:");
    scanf("%d",&b);
add=a-b;
x=add%2;
if(x==0)
printf("even");
else
printf("odd");

    return 0;
}
