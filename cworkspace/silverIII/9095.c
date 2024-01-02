#include <stdio.h>

int c[12] = {0, 1, 2, 4};

int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 4; j <= n; j++)
        {
            c[j] = c[j-1] + c[j-2] + c[j-3];
        }
        printf("%d\n", c[n]);
    }
}