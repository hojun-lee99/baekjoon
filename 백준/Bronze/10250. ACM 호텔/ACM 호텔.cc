#include <iostream>
using namespace std;

int main () {
    int t;
    int h, w, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x = 1;
        int y;
        int roomNum;

        cin >> h >> w >> n;

        while (n > h)
        {
            n -= h;
            
            x++;
        }
        
        y = n;

        roomNum = y*100 + x;

        cout << roomNum << "\n"; 
    }
    
    return 0;
}