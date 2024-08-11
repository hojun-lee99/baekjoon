#include <iostream>
using namespace std;

long long int getAtCalc (long long int a, long long int b) {
    long long int result = (a+b)*(a-b);
    return result;
}

int main () {
    long long int a, b;

    cin >> a >> b;

    long long int result = getAtCalc(a, b);

    cout << result;

    return 0;
}