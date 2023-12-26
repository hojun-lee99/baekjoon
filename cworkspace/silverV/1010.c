/*
1010.c
다이나믹 프로그래밍 조합 문제
https://www.acmicpc.net/problem/1010
*/
#include <stdio.h>
#define MAX 30

int bin_coef_DP(int n, int k){
    int C[MAX][MAX];
    int i, j;
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= k; j++)
        {
            if (j == 0 || j == i)
            {
                C[i][j] = 1;
            }
            else
            {   /*n개에서 k개를 선택하는 방법은 
                 *마지막을 선택하는 방법(n-1 C k-1)과 
                 *마지막을선택하지 않는 방법(n-1 C k)의 합
                */
                C[i][j] = C[i-1][j-1] + C[i-1][j];
            }
        }
    }
    return C[n][k];
}

int main(){
    int num = 0;
    int n, m, result;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &n, &m);
        result = bin_coef_DP(m, n);
        printf("%d\n", result);
    }
    return 0;
}