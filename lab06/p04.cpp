#include <iostream>

int gcd(int a, int b) {
    int smaller = (a < b) ? a : b;
    int currentGCD = 1;
    for (int i = 2; i <= smaller; ++i) {
        if (a % i == 0 && b % i == 0) {
            currentGCD = i;
        }
    }
    return currentGCD;
}
int main() {
    using namespace std;
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int result = gcd(a, b);
    cout << "GCD (" << a << ", " << b << ") = " << result << endl;

    return 0;
}