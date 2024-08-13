#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;

    cin >> str;

    for (int i = 0; i < 26; i++)
    {
        str.find_first_of('a' + i) == str.npos 
        ? cout << -1 << " " 
        : cout << str.find_first_of('a' + i) << " ";
    }

    return 0;
}