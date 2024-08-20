#include <iostream>
using namespace std;

int isPrime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }

    if (n == 1)
    {
        return 0;
    }
    
    return flag;
}

int main () 
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;

        cin >> number;

        if(isPrime(number))
        {
            count++;
        }
    }
    
    cout << count;
}