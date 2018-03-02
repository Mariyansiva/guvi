
#include<stdio.h>
int main()
{
int b,x,y,z,s,a;
printf("enter the value");
scanf("%d",&b);
y=b%10;
z=b/10;
s=z%10;
a=b/100;
printf("%d\t%d\t%d",a,s,y);
getch();
}
