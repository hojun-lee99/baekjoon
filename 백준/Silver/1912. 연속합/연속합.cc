#include <iostream>
#include <vector>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int t;
    vector<int> arr;
    int sum = 0;
    int maxSum;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;

        cin >> num;

        arr.push_back(num);
    }

    maxSum = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        sum = max(arr[i], sum + arr[i]);
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}