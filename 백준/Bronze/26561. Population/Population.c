#include <stdio.h>

int main(){
    int n;
    int p, t;
    int die, birth;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &t);
        die = t / 7;
        birth = t / 4;
        p = p - die + birth;
        printf("%d\n", p);
    }
}