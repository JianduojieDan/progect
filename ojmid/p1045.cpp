#include<iostream>
#include<algorithm>

int main() {
    using namespace std;

    double sides[3];
    cin >> sides[0] >> sides[1] >> sides[2];

    sort(begin(sides), end(sides), greater<double>());

    double A = sides[0], B = sides[1], C = sides[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && B != C) || (B == C && C != A) || (C == A && A != B)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
