#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    int positive = 0;
    double total = 0;

    for(int i; i < 6; i++) {
        double num;
        cin >> num;

        if (num > 0) {
            positive ++;
            total += num;
        }
    }
    double average = total / positive;

    cout << positive << " valores positivos\n";
    cout << fixed << setprecision(1);
    cout << average << "\n";
    return 0;
}