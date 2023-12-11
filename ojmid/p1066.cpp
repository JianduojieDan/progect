#include <iostream>

int main() {

    using namespace std;
    int even = 0, odd = 0, positive = 0, negative = 0;

    for(int i; i < 5; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            even ++;
        }
        if (num % 2 != 0) {
            odd ++;
        }
        if (num > 0) {
            positive ++;
        }
        if (num < 0) {
            negative ++;
        }
    }
    cout << even << " valor(es) par(es)\n";
    cout << odd << " valor(es) impar(es)\n";
    cout << positive << " valor(es) positivo(s)\n";
    cout << negative << " valor(es) negativo(s)\n";
    return 0;
}