#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string msg;
    double FX, TS, TSA;

    cin >> msg >> FX >> TS;
    TSA = FX + (0.15 * TS);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << TSA << endl;

    return 0;
}