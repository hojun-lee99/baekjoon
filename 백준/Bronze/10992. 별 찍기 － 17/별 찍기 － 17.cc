#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i == 0)
        {
            cout << "\n";
            continue;
        }
        for (int j = 0; j < i -1; j++)
        {
            cout << " ";
        }
        cout << " ";
        for (int j = 0; j < i -1; j++)
        {
            cout << " ";
        }

        cout << "*" << "\n";

    }

    for (int i = 0; i < 2*n-1; i++)
    {
        cout << "*";
    }
    
    return 0;
}