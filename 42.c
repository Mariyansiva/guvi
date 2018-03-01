
#include <stdio.h>

int main()
{
    int a,b;
    char x[10],y[10];
    printf("1st value: ");
scanf("%s",&x);
printf("\n2nd value: ");
scanf("%s",&y);
a=strlen(x);
b=strlen(y);
if(a<b)
{
    printf("\n%s",y);
}
else
{printf("\n%s",x);
}
    return 0;
}



