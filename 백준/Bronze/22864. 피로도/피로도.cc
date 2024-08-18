#include <iostream>
using namespace std;

int main () {
    int a, b, c, m;
    int needRest = 0;
    int count = 0;
    int totalWork = 0;

    cin >> a >> b >> c >> m;

    while (count < 24)
    {
        if (needRest + a <= m)
        {
            totalWork += b;
            needRest += a;
        }
        else
        {
            needRest -= c;
            if (needRest < 0)
            {
                needRest = 0;
            }   
        }
        count++;
    }
    
    cout << totalWork;
}