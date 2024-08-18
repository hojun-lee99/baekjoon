#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    double x[4];
    double y[4];
    double findX;
    double findY;

    while (cin >> x[0] >> y[0] 
                >> x[1] >> y[1] 
                >> x[2] >> y[2] 
                >> x[3] >> y[3])
    {
        if (x[0] == x[2] && y[0] == y[2])
        {
            double a = (x[1] + x[3]) / 2;
            double b = (y[1] + y[3]) / 2;

            findX = a + ( a - x[0]);
            findY = b + ( b - y[0]);

        }
        else if (x[0] == x[3] && y[0] == y[3])
        {
            double a = (x[1] + x[2]) / 2;
            double b = (y[1] + y[2]) / 2;

            findX = a + ( a - x[0]);
            findY = b + ( b - y[0]);
        }
        else if (x[1] == x[2] && y[1] == y[2])
        {
            double a = (x[0] + x[3]) / 2;
            double b = (y[0] + y[3]) / 2;

            findX = a + ( a - x[1]);
            findY = b + ( b - y[1]);
        }
        else if (x[1] == x[3] && y[1] == y[3])
        {
            double a = (x[0] + x[2]) / 2;
            double b = (y[0] + y[2]) / 2;

            findX = a + ( a - x[1]);
            findY = b + ( b - y[1]);
        }

        cout << fixed;
        cout.precision(3);

        cout << (double)findX << " " << (double)findY << "\n";
    }
    
}