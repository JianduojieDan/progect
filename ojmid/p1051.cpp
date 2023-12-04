#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    double salary;
    cin >> salary;

    cout << fixed << setprecision(2);

    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        double tax = 0.0;

        if (salary > 2000.00 && salary <= 3000.00) {
            tax = (salary - 2000.00) * 0.08;
        } else if (salary > 3000.00 && salary <= 4500.00) {
            tax = (1000.00 * 0.08) + ((salary - 3000.00) * 0.18);
        } else {
            tax = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salary - 4500.00) * 0.28);
        }

        cout << "R$ " << tax << endl;
    }

    return 0;
}
