#include <iostream>

double millimetersToInches(double millimeters) {
    const double MM_TO_INCH = 0.0393701;
    return millimeters * MM_TO_INCH;
}

double inchesToMillimeters(double inches) {
    const double INCH_TO_MM = 25.4;
    return inches * INCH_TO_MM;
}

int main() {
    using namespace std;

    double lengthInMillimeters, lengthInInches;

    cout << "Enter length in millimeters: ";
    cin >> lengthInMillimeters;

    lengthInInches = millimetersToInches(lengthInMillimeters);
    cout << "Inches: " << lengthInInches << endl;

    cout << "Enter length in inches: ";
    cin >> lengthInInches;

    lengthInMillimeters = inchesToMillimeters(lengthInInches);
    cout << "Millimeters: " << lengthInMillimeters << endl;

    return 0;
}
