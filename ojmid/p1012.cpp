#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    double areaTriangle = (A * C) / 2;
    double areaCircle = 3.14159 * pow(C, 2);
    double areaTrapezium = ((A + B) / 2) * C;
    double areaSquare = pow(B, 2);
    double areaRectangle = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTriangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCircle << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaSquare << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRectangle << endl;

    return 0;
}