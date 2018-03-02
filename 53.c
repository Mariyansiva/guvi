


#include<stdio.h>
int main()
{
int b,x,y,z,s,a,n;
printf("enter the value");
scanf("%d",&b);
y=b%10;
z=b/10;
s=z%10;
a=b/100;
n=(a*s*y);
printf("%d",n);
getch();
}
