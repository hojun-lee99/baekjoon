#include <stdio.h>

int main () {
    int bird;
    int count = 0;

    scanf("%d", &bird);
    
    while (bird != 0)
    {
        for (int i = 1; i <= bird; i++)
        {
            bird -= i;
            count++;
        }
    }

    printf("%d", count);
}