#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int t;

    cin >> t;

    while (t-- != 0)
    {
        int n;

        cin >> n;

        if (n / 10 != 0)
        {
            n = round((double)n / 10) * 10;
        }
        if (n / 100 != 0)
        {
            n = round((double)n / 100) * 100;
        }
        if (n / 1000 != 0)
        {
            n = round((double)n / 1000) * 1000;
        }
        if (n / 10000 != 0)
        {
            n = round((double)n / 10000) * 10000;
        }
        if (n / 100000 != 0)
        {
            n = round((double)n / 100000) * 100000;
        }
        if (n / 1000000 != 0)
        {
            n = round((double)n / 1000000) * 1000000;
        }
        if (n / 10000000 != 0)
        {
            n = round((double)n / 10000000) * 10000000;
        }
        
        cout << n << "\n";
    }
    
    return 0;
}