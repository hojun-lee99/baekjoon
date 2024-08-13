#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<string> words;

    string word;

    while (cin >> word)
    {
        words.push_back(word);
    }
    
    int n = words.size();

    cout << n;
}