#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double EN,WH,HR,SS;

    cin >> EN >> WH >> HR;
    SS = WH * HR;

    cout << "NUMBER = " << EN << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << SS << endl;

    return 0;
}