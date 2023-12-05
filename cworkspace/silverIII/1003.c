#include <stdio.h>
#define MAX_SIZE 40

void iterative_fib(int n, int zero[], int one[])
{
    int i;
    for (i = 2; i <= n; i++)
    {
        one[i] = one[i - 1] + one[i - 2];
        zero[i] = zero[i - 1] + zero[i - 2];
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        int num;
        scanf("%d", &num);
        int one[MAX_SIZE] = {0}, zero[MAX_SIZE] = {0};
        zero[0] = 1;
        one[1] = 1;
        iterative_fib(num, one, zero);
        printf("%d %d\n", zero[num], one[num]);
    }
}