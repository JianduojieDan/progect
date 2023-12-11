#include <iostream>

void displayPattern(int n) {    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    displayPattern(n);

    return 0;}