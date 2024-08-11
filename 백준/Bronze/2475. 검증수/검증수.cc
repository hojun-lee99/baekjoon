#include <iostream>
using namespace std;

int getChecksum(int num[5]) {
    return (num[0]*num[0]
            + num[1]*num[1]
            + num[2]*num[2]
            + num[3]*num[3]
            + num[4]*num[4]) % 10;
            
}


int main () {
    int num[5];
    int checksum;

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    
    cout << getChecksum(num);

    return 0;
}