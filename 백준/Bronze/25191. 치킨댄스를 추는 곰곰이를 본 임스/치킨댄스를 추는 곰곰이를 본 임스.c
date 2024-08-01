#include <stdio.h>

int main() {
    int chicken, cola, beer;
    int order = 0;

    scanf("%d", &chicken);
    scanf("%d %d", &cola, &beer);

    while (cola > 1 || beer > 0)
    {
        if (cola > 1)
        {
            cola -= 2;
            order++;
        }

        if (beer > 0)
        {
            beer -= 1;
            order++;
        }
    }
    if (chicken > order)
    {
        printf("%d", order);
    }
    else
    {
        printf("%d", chicken);
    }
    
}