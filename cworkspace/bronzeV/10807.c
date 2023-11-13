#include <stdio.h>

int main()
{
    int num;
    int ary[201] = { 0 };
    int n;
    int findnum;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        ary[n+100]++;
    }
    scanf("%d", &findnum);

    printf("%d", ary[findnum+100]);
}