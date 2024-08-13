#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int integer;
    int max = -1000000;
    int min = 1000000;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> integer;

        if (max < integer)
        {
            max = integer;
        }
        if (min > integer)
        {
            min = integer;
        }
    }
    
    cout << min << " " << max;
}