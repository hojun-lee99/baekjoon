#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        string input;

        cin >> n >> input;

        for (int j = 0; j < input.length(); j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << input[j];
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}