#include <iostream>

int main () {
    int score;

    std::cin >> score;

    if (score >= 90)
    {
        std::cout << 'A';
    }
    else if (90 > score && score >= 80)
    {
        std::cout << 'B';
    }
    else if (80 > score && score >= 70)
    {
        std::cout << 'C';
    }
    else if (70 > score && score >= 60)
    {
        std::cout << 'D';
    }
    else
    {
        std::cout << 'F';
    }

    return 0;
}