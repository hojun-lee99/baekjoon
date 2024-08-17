#include <ios>
#include <vector>
using namespace std;

int main () {
    int n;
    vector<int> v;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;

        scanf("%d", &num);
        v.push_back(num);
    }

    int maxNum = -1;
    int result = 0;

    for (int i = (int)v.size() - 1; i >= 0; i--)
    {
        if (maxNum < v[i])
        {
            maxNum = v[i];
        }
        
        result = max(result, maxNum - v[i]); 
    }

    printf("%d", result);
}