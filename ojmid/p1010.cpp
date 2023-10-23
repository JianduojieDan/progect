#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c1, c2, q1, q2;
    double p1, p2, total;

    cin >> c1 >> q1 >> p1;
    cin >> c2 >> q2 >> p2;

    total = (q1 * p1) + (q2 * p2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}