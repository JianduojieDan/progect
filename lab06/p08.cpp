#include <iostream>

void displayLargest(double num1, double num2, double num3) {
    double largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    std::cout << "The largest number is: " << largest << std::endl;
}
    double findLargest(double num1, double num2, double num3) {
    return (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}
int main() {
    double num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    displayLargest(num1, num2, num3);
    double result = findLargest(num1, num2, num3);
    std::cout << "The largest number is: " << result << " (using the second approach)" << std::endl;
    return 0;
}