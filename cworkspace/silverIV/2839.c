/*
* 2839번 설탕 배달 문제
* dp를 이용한 배낭 문제
*/
#include <stdio.h>
#define MAX 5000


int knapsack_dp(int k)
{
    int ary[MAX] = { -1, -1, 1, -1, 1}; //5킬로까지의 초기값 지정
    //-3 값과 -5값중 작은 값을 배열에 저장하는 방법으로 해결
    for (int i = 5; i < k; i++)
    {
        if ((ary[i-3] == -1) && (ary[i-5] == -1))
        {
            ary[i] = -1;
        }
        else if (ary[i-3] == -1 && ary[i-5] != -1)
        {
            ary[i] = ary[i-5] + 1;
        }
        else if (ary[i-5] == -1 && ary[i-3] != -1)
        {
            ary[i] = ary[i-3] + 1;
        }
        else
        {
            if (ary[i-3] < ary[i-5])
            {
                ary[i] = ary[i-3] + 1;
            }
            else
            {
                ary[i] = ary[i-5] + 1;
            }
        }
    }
    return ary[k-1];
}

int main(){
    int kgram, result;

    scanf("%d", &kgram);
    result = knapsack_dp(kgram);
    printf("%d\n", result);
}