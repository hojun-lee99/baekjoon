#include <iostream>
#include <string>
using namespace std;

int main () {
    int a, b, c;
    string result;
    int output[10] = { 0 };

    cin >> a >> b >> c;

    result = to_string(a * b * c);

    for (int i = 0; i < result.length(); i++)
    {
        int index = (int)result[i] - '0';
        output[index]++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << output[i] << "\n";
    }
    
    return 0;
}