#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    scanf("%s", input);

    if (strchr(input, 'M') != NULL && strchr(input, 'O') != NULL && strchr(input, 'B') != NULL && strchr(input, 'I') != NULL && strchr(input, 'S') != NULL)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}