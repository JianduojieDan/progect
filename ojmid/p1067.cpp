#include <iostream>

int main() {
    using namespace std;
    int x;
    cin >> x;

    if (1 <= x && x <= 1000) {
        int num = (x + 1) / 2;
        int odd = 1;

        for (int i = 0; i < num; i++) {
            cout << odd << endl;
            odd += 2;
        }
    }
    return 0;
}