#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    int in, out;
    int maxRemain;
    int flag = 0;

    cin >> n;
    cin >> m;

    maxRemain = m;

    for (int i = 0; i < n; i++)
    {
        cin >> in >> out;

        m += in;
        m -= out;
        if (m < 0)
        {
            flag = 1;
        }
        
        maxRemain = max(maxRemain, m);
    }

    if (flag == 1)
    {
        maxRemain = 0;
    }
    
    cout << maxRemain;
}