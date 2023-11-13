#include <stdio.h>

int main() {
    long long n = 0;
    long long m = 0;
    long long diff = 0;

    scanf("%lld %lld", &n, &m);

    if(n >= m){
        diff = n - m;
    }
    else if ( n < m){
        diff = m - n;
    }

    printf("%lld", diff);
}