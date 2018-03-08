
#include <stdio.h>

int main()
{
    int x,y;
    printf("two values");
    scanf("%d%d",&x,&y);
printf("before swap%d %d",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("\nafter swap%d %d",x,y);
    return 0;
}


