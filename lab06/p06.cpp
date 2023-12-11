#include <iostream>
#include<iomanip>

double averageDigits(long n) {
    long sum = 0;
    int count = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
        count++;
    }

    if (count == 0) {
        return 0;
    }

    return (static_cast<double>(sum) / count);
}

int main() {
    using namespace std;

    long number;

    cout << "Enter the number: ";
    cin >> number;

    double average = averageDigits(number);

    cout << "The sum of the digits is " << number % 10 << endl;
    cout << "The average of the digits is " << setprecision(1) <<average << endl;

    return 0;
}
