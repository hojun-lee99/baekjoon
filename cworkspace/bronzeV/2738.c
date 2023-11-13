#include <stdio.h>

int main(){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int metrixA[num1][num2], metrixB[num1][num2], sumMetrix[num1][num2];

    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            scanf("%d", &metrixA[i][j]);
        }
    }
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            scanf("%d", &metrixB[i][j]);
        }
    }
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            sumMetrix[i][j] = metrixA[i][j] + metrixB[i][j];
        }
    }
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            printf("%d ",sumMetrix[i][j]);
        }
        printf("\n");
    }
}