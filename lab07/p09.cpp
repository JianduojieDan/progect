#include <iostream>

int indexOfLargestElement(double array[], int size) {
    if (size == 0) {
        return -1;
    }

    int index = 0;
    double maxElement = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] >= maxElement) {
            maxElement = array[i];
            index = i;
        }
    }

    return index;
}

int main() {
    double numbers[15];
    std::cout << "Enter 15 numbers: ";

    for (int i = 0; i < 15; i++) {
        std::cin >> numbers[i];
    }

    int index = indexOfLargestElement(numbers, 15);
    std::cout << "The index of the largest element is: " << index << std::endl;

    return 0;
}
