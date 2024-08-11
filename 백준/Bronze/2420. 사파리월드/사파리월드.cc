#include <iostream>

int main () {
    long long int a, b;
    long long int result;

    std::cin >> a >> b;

    if ( a >= b )
    {
        result = a - b;
    }
    else
    {
        result = b - a;
    }

    std::cout << result;

    return 0;
}