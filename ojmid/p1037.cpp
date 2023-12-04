#include<iostream>

int main() {
    using namespace std;
    float num;
    cin >> num;

    if (0 <= num && num <= 25.00) {
        cout << "Intervalo [0,25]\n";
    } else if (25.00 < num && num <= 50.00) {
        cout << "Intervalo (25,50]\n";
    } else if (50.00 < num && num <= 75.00) {
        cout << "Intervalo (50,75]\n";
    } else if (75.00 < num && num <= 100.00) {
        cout << "Intervalo (75,100]\n";
    } else {
        cout << "Fora de intervalo\n";
    }

    return 0;
}
