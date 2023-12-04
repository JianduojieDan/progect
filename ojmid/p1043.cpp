#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
    using namespace std;

    float A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);

    if (A < B + C && B < A + C && C < A + B) {
        float perimeter = A + B + C;
        cout << "Perimetro = " << perimeter << endl;
    } else {
        float area = ((A + B) * C) / 2.0;
        cout << "Area = " << area << endl;
    }

    return 0;
}
