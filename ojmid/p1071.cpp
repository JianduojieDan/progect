#include <iostream>

int main() {

    using namespace std;
    int X, Y;
    cin >> X >> Y;

    if (X > Y) {
        swap(X, Y);
    }

    int odd_sum = 0;
    int num = X + 1;

    while (num < Y) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
        ++num;
    }

    cout << odd_sum << endl;

    return 0;
}