/*
insertion_sort(A[1..N]) { # A[1..N]을 오름차순 정렬한다.
    for i <- 2 to N {
        loc = i - 1;
        newItem = A[i];

        # 이 지점에서 A[1..i-1]은 이미 정렬되어 있는 상태
        while (1 <= loc and newItem < A[loc]) {
            A[loc + 1] <- A[loc];
            loc--;
        }
        if (loc + 1 != i) then A[loc + 1] = newItem;
    }
}
*/

#include <iostream>
#include <vector>
using namespace std;

int insertion_sort(vector<int> &v, int k) {
    int loc;
    int newItem;
    for (int i = 1; i < v.size(); i++)
    {
        loc = i - 1;
        newItem = v[i];


        while (0 <= loc && newItem < v[loc])
        {
            v[loc + 1] = v[loc];
            k--;
            if (k == 0)
            {
                return v[loc];
            }
            
            loc--;
        }
        if (loc + 1 != i)
        {
            v[loc + 1] = newItem;
            k--;
            if (k == 0)
            {
                return v[loc];
            }
        }

    }
    
    return -1;
}

int main () {
    int n, k;
    vector<int> v;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        v.push_back(number);
    }
    
    int insertedNum = insertion_sort(v, k);

    cout << insertedNum;
    
}