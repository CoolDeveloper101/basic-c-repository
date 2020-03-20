#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    printf("%d\n", factorial(10));
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
