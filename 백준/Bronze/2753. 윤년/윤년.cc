#include <iostream>

int main () {
    int year;

    std::cin >> year;

    if (year % 400 == 0)
    {
        std::cout << 1;
    }
    else if (year % 100 == 0)
    {
        std::cout << 0;
    }
    else if (year % 4 == 0)
    {
        std::cout << 1;
    }
    else
    {
        std::cout << 0;
    }
    
    return 0;
}