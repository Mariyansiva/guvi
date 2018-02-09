#include <stdio.h>
void main()
{
    int i, n, x1= 0, x2 = 1, nextTerm;

    printf("Enter the no of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", x1);
        nextTerm = x1 + x2;
        x1 = x2;
        x2 = nextTerm;
    }
    return 0;
}
