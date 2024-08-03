#include <stdio.h>
#include <math.h>

int main()
{
    int D, H, W;
    double N, S;

    scanf("%d %d %d", &D, &H, &W);

    N = sqrt((H*H) + (W*W));
    S = (double)D / N;
    H = H * S;
    W = W * S;

    printf("%d %d", H, W);    
}