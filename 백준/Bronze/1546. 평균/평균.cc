#include <iostream>
#include <vector>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    double max = 1;
    double sum = 0;
    vector<double> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double num;

        cin >> num;

        v.push_back(num);

        if (max < num)
        {
            max = num;
        }

    }

    for (int i = 0; i < n; i++)
    {
        sum += v[i] / max * 100;
    }
    
    sum /= n;

    cout << sum;
}