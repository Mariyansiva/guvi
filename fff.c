#include <stdio.h>
int main()
{
long long n;
int count = 0;
printf("Enter the integer: ");
scanf("%lld", &n);
while(n != 0)
    {
         n = n/10
        n /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
}
