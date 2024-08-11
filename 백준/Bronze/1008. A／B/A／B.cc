#include <iostream>
#include <iomanip>

int main () {
    int A, B;
    double divide;

    std::cin >> A >> B;

    divide = (double)A / (double)B;

    std::cout << std::setprecision(10);
    std::cout << divide;

    return 0;
}