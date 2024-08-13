#include <iostream>
#include <string>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int input;
    int remainder[42] = { 0 };
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        int index;

        cin >> input;

        index = input % 42;

        remainder[index]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (remainder[i] != 0)
        {
            count++;
        }
    }
    
    cout << count;

    return 0;
}