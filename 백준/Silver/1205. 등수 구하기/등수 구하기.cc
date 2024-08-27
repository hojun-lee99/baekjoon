#include <iostream>
using namespace std;

int main () {
    int n, newScore, p;

    cin >> n >> newScore >> p;

    int count = 1;
    int ranking = 1;

    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;

        if (score > newScore)
        {
            count++;
        }
        if (score >= newScore)
        {
            ranking++;
        }
        
    }

    if (ranking > p)
    {
        cout << -1;
    }
    else
    {
        cout << count;
    }
    
    
}