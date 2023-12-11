#include <iostream>

void displayEven(int number) {
    number = (number < 0) ? -number : number;
    std::cout << "Even digits in the number: ";
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
        std::cout << digit << " ";
        }
        number /= 10;    }
    std::cout << std::endl;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    displayEven(number);
    return 0;
}