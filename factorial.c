#include <stdio.h>

// factoral using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    printf("plz enter the number of factorial to be calculated:");
    scanf("%d", &n);

    int result = factorial(n);
    printf("the factoral valid is :%d", result);
    return 0;
}