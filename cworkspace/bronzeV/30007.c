#include <stdio.h>

int main()
{
    int ary[100];
    int num, A, B, X;

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %d", &A, &B, &X);
        ary[i] = A * (X - 1) + B;
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", ary[i]);
    }
}