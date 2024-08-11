#include <iostream>

int main () {
    int arr[100];
    int n, x;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}