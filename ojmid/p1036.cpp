#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = pow(b,2) - 4 * a * c;

    if (a != 0) {
        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << fixed << setprecision(5) << "R1 = " << root1 << endl;
            cout << fixed << setprecision(5) << "R2 = " << root2 << endl;
        } else if (discriminant == 0) {
            double root1 = -b / (2 * a);
            cout << fixed << setprecision(5) << "R1 = " << root1 << endl;
        } else {
            cout << "Impossivel calcular" << endl;
        }
    } else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}