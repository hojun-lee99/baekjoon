#include <stdio.h>

int main() {
    unsigned long long int money = 0;
    unsigned long long int num = 0;
    unsigned long long int shared = 0;
    unsigned long long int remain = 0;

    scanf("%llu %llu", &money, &num);

    shared = money / num;
    remain = money % num;
    
    printf("%llu\n%llu\n", shared, remain);
    
}