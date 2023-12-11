#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    using namespace std;

    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    if (a == 0 && b == 0) {
        cout << "GCD(0, 0) is not defined." << endl;
    } else {
        int result = gcd(abs(a), abs(b));
        cout << "GCD(" << a << ", " << b << ") = " << result << endl;
    }

    return 0;
}
