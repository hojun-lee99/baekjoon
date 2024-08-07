#include <stdio.h>

int main () {
    char a[20], b[20], c[20];
    int l = 0, k = 0, p = 0;

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if (a[0] == 'l' || b[0] == 'l' || c[0] == 'l')
    {
        l = 1;
    }
    if (a[0] == 'k' || b[0] == 'k' || c[0] == 'k')
    {
        k = 1;
    }
    if (a[0] == 'p' || b[0] == 'p' || c[0] == 'p' )
    {
        p = 1;
    }
    
    if (l && k && p)
    {
        printf("GLOBAL");
    }
    else
    {
        printf("PONIX");
    }
        
}