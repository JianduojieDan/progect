#include<iostream>
#include<cmath>

int main() {

    using namespace std;

    const double InchToCm = 2.54;

    double in , cm;
    cout <<"Enter the length in inches: " << endl;
    cin >> in;

    cm = in * InchToCm;
    cout << fixed;
    cout.precision(2);

    cout << in << " in. = " << cm << " cm." << endl;

}