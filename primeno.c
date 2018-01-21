
#include <stdio.h>
int main()
{
   int i, num, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==3)
   {
      printf("Entered number is %d "\
             "and it is a prime no:",num);
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime no:",num);
   }
}
