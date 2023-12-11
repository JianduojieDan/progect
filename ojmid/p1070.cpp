#include <iostream>

int main() {
    using namespace std;
    int x;
    cin >> x;

    if (x % 2 != 0) {
        int odd = x;

        for (int i = 0; i < 6; i++) {
            cout << odd << endl;
            odd += 2;
        }
    } else {
        int odd = x + 1;
        for (int i = 0; i < 6; i++) {
            cout << odd << endl;
            odd += 2;
        }
    }

    return 0;
}