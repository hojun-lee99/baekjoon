#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;


int main () {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        for (int j = 0; j < name.length(); j++)
        {
            name[j] = tolower(name[j]);
        }
        
        printf("%s\n", name.c_str());
    }
}