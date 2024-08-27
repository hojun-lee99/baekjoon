#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int gcd (int a, int b){
    int remainder = a % b;
    if (remainder == 0)
    {
        return b;
    }
    return gcd(b, remainder);
}

int main () {
    string str;
    vector<int> num;
    getline(cin, str);

    istringstream is(str);

    string buffer;

    while(getline(is, buffer, ':')) {
        num.push_back(stoi(buffer));
    }

    int gcdNum = gcd(num[0], num[1]);

    cout << num[0]/gcdNum << ":" << num[1]/gcdNum;
}