#include <cstdio>
#include <iostream>

int main () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a[30] = { 0 };

    for (int i = 0; i < 28; i++)
    {
        int n;

        std::cin >> n;

        a[n-1] = 1;
    }
    

    for (int i = 0; i < 30; i++)
    {
        if (a[i] == 0)
        {
           std::cout << i+1 << "\n"; 
        }
    }
    
    return 0;
}