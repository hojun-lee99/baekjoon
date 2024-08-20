#include <iostream>
#include <string>
using namespace std;

void reverse(string &str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        swap(str[i], str[str.length() - i - 1]);
    }
    
}

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string str;


    while (true)
    {
        int n;
        string str;

        cin >> n;
        
        if (n == 0)
        {
            break;
        }

        string originStr = to_string(n);
        string reverseStr = to_string(n);
        reverse(reverseStr);

        if (originStr.compare(reverseStr) != 0)
        {
            cout << "no" << "\n";
        }
        else
        {
            cout << "yes" << "\n";
        }
        
    }
    
}