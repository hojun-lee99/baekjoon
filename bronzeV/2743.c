#include <stdio.h>
#include <string.h>

int main(){
    char string[100] = {0};

    scanf("%s", string);

    int len = strlen(string);

    printf("%d\n", len);
}