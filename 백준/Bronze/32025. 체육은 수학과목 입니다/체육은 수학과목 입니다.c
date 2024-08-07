#include <stdio.h>

int getMin(int h, int w) {
    if (h > w)
    {
        return w;
    }
    return h;
}

int main () {
    int h, w;

    scanf("%d %d", &h, &w);

    int min = getMin(h, w);

    int radius = min * 50;

    printf("%d", radius);
}