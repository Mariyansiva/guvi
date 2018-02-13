#include <stdio.h>
void main()
{  long long z;
   int count=0;
   printf("Enter the number: ");
   scanf("%d",&z);
   while(z!=0)
  { 
  z=z/10;
  ++count;
  }
    printf("The count of digits in a no:%d",count);
}

