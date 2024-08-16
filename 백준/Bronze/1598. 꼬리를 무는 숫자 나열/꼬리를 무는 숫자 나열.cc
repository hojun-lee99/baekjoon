#include <ios>
using namespace std;

int main () {
    int n1, n2;
    int count = 0;

    scanf("%d %d", &n1, &n2);
    n1--;
    n2--;

    int a1 = n1 / 4;
    int a2 = n2 / 4;
    count += abs(a2 - a1);

    int b1 = n1 % 4;
    int b2 = n2 % 4;
    count += abs(b2 - b1);
   
    printf("%d", count);
}