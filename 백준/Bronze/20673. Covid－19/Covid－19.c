#include<stdio.h>

int main(){
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n2 > 30)
    {
        printf("Red");
    }
    else if (n1 <= 50 && n2 <= 10)
    {
        printf("White");
    }
    else
    {
        printf("Yellow");
    }
}