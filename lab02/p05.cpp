#include<iostream>

using namespace std;

int main () {

    double f;
    double c;


    cout << "Enter the temperature in degrees Fahrenheit: " << endl;
    cin >> f ;

    f=f;
    c = (5.0 * (f - 32.00)) / 9.0;

    cout << fixed;
    cout.precision(2);
    cout << "The temperature in degrees Celsius is " << c << endl;

    return 0;
}