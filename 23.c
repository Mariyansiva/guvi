# inculde<stdio.h>
void main()
{
int a, i, flag = 0;
 printf("Enter a positive integer: ");
 scanf("%d",&a);
    for(i=2; i<=a/2; ++i)
  {
   if(a%i==0)
  {
flag=1;
break;
        }
    }
 
 if (flag==0)
        printf("%d is a prime number.",n);
    else
    printf("%d is not a prime number.",n);
}
