#include <iostream>

int getSum(int A, int B) {
    return A+B;
}

int getSub(int A, int B) {
    return A-B;    
}

int getMultiply(int A, int B) {
    return A*B;
}

int getQuotient(int A, int B) {
    return A/B;
}

int getRemainder(int A, int B) {
    return A%B;
}
int main () {
    int A, B;
    int sum, sub, multiply, quotient, remainder;

    std::cin >> A >> B;

    sum = getSum(A, B);
    sub = getSub(A, B);
    multiply = getMultiply(A, B);
    quotient = getQuotient(A, B);
    remainder = getRemainder(A, B);

    std::cout << sum << std::endl;
    std::cout << sub << std::endl;
    std::cout << multiply << std::endl;
    std::cout << quotient << std::endl;
    std::cout << remainder << std::endl;
    
}