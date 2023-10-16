#include <iostream>
using namespace std;

int main() {
    float a;
    float b;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    cout << "Before swapping: a = " << a << "; b = " << b << "; " << endl;

    float temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << "; b = " << b << "; " << endl;

    return 0;
}