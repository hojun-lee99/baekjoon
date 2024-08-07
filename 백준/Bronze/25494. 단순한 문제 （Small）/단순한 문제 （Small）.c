#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a = 1, b = 1, c = 1;
        int count = 0;

        scanf("%d %d %d", &a, &b, &c);

        for (int j = 1; j <= a; j++)
        {
            for (int k = 1; k <= b; k++)
            {
                for (int l = 1; l <= c; l++)
                {
                    if (j % k == k % l && k % l == l % j)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
}