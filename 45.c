#include <stdio.h>
void main()
{  long long x;
   int count=0;
   printf("Enter the number: ");
   scanf("%d",&x);
   while(x!=0)
  { 
  x=x/10;
  ++count;
  }
    printf("The count of digits in a no:%d",count);
}

