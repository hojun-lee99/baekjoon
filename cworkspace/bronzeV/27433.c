#include <stdio.h>

long long fac(long long n)
{
    if( n == 0)
    {
        return 1;
    }
    return n * fac(n-1);
}

int main()
{
    long long n;
    scanf("%llu", &n);

    long long result = fac(n);

    printf("%llu\n", result);
}