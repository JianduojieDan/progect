#include <iostream>

int main() {

    using namespace std;
    int positive = 0;

    for(int i; i < 6; i++) {
        double num;

        cin >> num;

        if (num > 0) {
            positive ++;
        }
    }

    cout << positive << " valores positivos\n";
    return 0;
}