#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    float even = 0;

    for(int i; i < 5; i++) {
        float num;
        cin >> num;

        if (fmod(num, 2) == 0) {
            even ++;
        }
    }

    cout << even << " valores pares\n";

    return 0;
}