#include <iostream>
#include <string>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    string input;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int score = 0;
        int lengthOfO = 1;

        cin >> input;

        for (int j = 0; j < input.length(); j++)
        {
            if (input[j] == 'O')
            {
                score += lengthOfO;
                lengthOfO++;
            }
            else if (input[j] == 'X')
            {
                lengthOfO = 1;
            }
        }
        
        cout << score << "\n";
    }
    
    return 0;
}