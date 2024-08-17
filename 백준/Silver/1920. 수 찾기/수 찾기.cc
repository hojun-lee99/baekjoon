#include <ios>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    int m;
    vector<int> a;


    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        a.push_back(num);
    }

    sort(a.begin(), a.end());


    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int t;
        
        scanf("%d", &t);

        if (binary_search(a.begin(), a.end(), t))
        {
            printf("1\n");
        }
        else
        {
           printf("0\n"); 
        }
    }
    
    return 0;
}