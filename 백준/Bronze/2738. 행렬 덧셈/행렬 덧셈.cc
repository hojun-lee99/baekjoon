#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;


int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;

    vector < vector <int> > matrix1;
    vector < vector <int> > matrix2;
     

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        vector <int> v;

        for (int j = 0; j < n; j++)
        {
            int n;

            cin >> n;
            v.push_back(n);
        }
        
        matrix1.push_back(v);
    }
    

    for (int i = 0; i < m; i++)
    {
        vector <int> v;

        for (int j = 0; j < n; j++)
        {
            int n;

            cin >> n;
            v.push_back(n);
        }
        
        matrix2.push_back(v);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;    
}