#include <iostream>
#include <string>
using namespace std;

int main () {
    string num;
    int size;
    int sum = 0;

    cin >> size;
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        sum += (int)num[i] - '0';
    }
    
    cout << sum;

    return 0;
}