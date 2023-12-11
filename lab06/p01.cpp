#include <iostream>

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;

}
int main() {

    int a;
    int b;

    std::cout << "Enter the first value: ";
    std::cin >> a;

    std::cout << "Enter the second value: ";
    std::cin >> b;

    std::cout << "Before swapping: a = " << a << "; b = " << b << "; " << std::endl;
    swap(a,b);

    std::cout << "After swapping: a = " << a << "; b = " << b << "; " << std::endl;

    return 0;
}