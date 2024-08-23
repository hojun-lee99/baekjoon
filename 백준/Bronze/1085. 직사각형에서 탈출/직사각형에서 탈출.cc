#include <iostream>
using namespace std;

int main () {
    int x, y, w, h;
    int distance;

    cin >> x >> y >> w >> h;

    distance = min( x, y );
    distance = min( distance, w - x);
    distance = min( distance, h - y);    

    cout << distance;
    
    return 0;    
}