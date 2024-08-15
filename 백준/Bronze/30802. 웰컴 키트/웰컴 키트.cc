#include <stdio.h>

int calShirtCount(int t,int n) {
    if (n % t == 0)
    {
        return n / t;
    }
    else
    {
        return n / t + 1;
    }
    
}

int main () {
    int n;
    int s, m, l, xl, xxl, xxxl;
    int t, p;
    int maxShirtBundles = 0;
    int maxPenBundles = 0, maxPenCounts = 0;

    scanf("%d", &n);
    scanf("%d %d %d %d %d %d", &s, &m, &l, &xl, &xxl, &xxxl);
    scanf("%d %d", &t, &p);

    maxPenBundles = n / p;
    maxPenCounts = n % p;

    maxShirtBundles += calShirtCount(t, s);
    maxShirtBundles += calShirtCount(t, m);
    maxShirtBundles += calShirtCount(t, l);
    maxShirtBundles += calShirtCount(t, xl);
    maxShirtBundles += calShirtCount(t, xxl);
    maxShirtBundles += calShirtCount(t, xxxl);

    printf("%d\n%d %d", maxShirtBundles, maxPenBundles, maxPenCounts);
}