#include <iostream>

int main () {
    int t;

    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        printf("%d\n", a+b);
    }

    return 0;
}