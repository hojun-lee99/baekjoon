/*
* 1463번 1로 만들기
* dp문제
*/
#include <stdio.h>
#define MAX 1000001
//1 뺀 값 2로 나눈 값 3으로 나눈 값중 최소값을 배열에 저장하는 방법
int one_dp(int num){
    int a[MAX] = {1, 0, 1, 1};

    for (int i = 4; i <= num; i++)
    {
        int num1 = MAX, num2 = MAX, num3 = MAX;
        int min;
        if(i % 3 == 0)
        {
            num1 = a[i/3] + 1;
        }
        if(i % 2 == 0)
        {
            num2 = a[i/2] + 1;
        }
        num3 = a[i-1] + 1;
        min = (num1 < num2) ? num1 : num2;
        min = (min < num3) ? min : num3;
        a[i] = min;
    }
    return a[num];
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", one_dp(num));
}