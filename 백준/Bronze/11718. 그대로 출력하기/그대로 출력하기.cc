#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;
    
    getline(cin, str, '\0');

    cout << str;
}