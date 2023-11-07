/*
미해결 
정수값이 크기 때문에 정수형 대신 문자열을 사용하여 계산하여야 함
*/
#include <stdio.h>

int main() {
    unsigned long long n1 =0;
    unsigned long long n2 =0;
    unsigned long long sum =0;

    
    scanf("%llu %llu", &n1, &n2);

    sum = n1 + n2;

    printf("%llu\n", sum);
}