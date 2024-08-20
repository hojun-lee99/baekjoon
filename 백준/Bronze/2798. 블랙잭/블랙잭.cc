#include <iostream>
#include <vector>
using namespace std;

int main () {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    vector<int> v;
    int max = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int num;
        
        cin >> num;

        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            for (int k = j+1; k < v.size(); k++)
            {
                if(max < v[i] + v[j] + v[k] && m >= v[i] + v[j] + v[k])
                {
                    max = v[i] + v[j] + v[k];
                }
            }
        }
    }
    
    cout << max;
    
}