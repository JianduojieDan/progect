#include<iostream>
#include<iomanip>

int main() {
    using namespace std;

    double salary;
    cin >> salary;

    double newSalary, earnedMoney, percentual;

    if (salary <= 400.00) {
        percentual = 15.0;
    } else if (salary <= 800.00) {
        percentual = 12.0;
    } else if (salary <= 1200.00) {
        percentual = 10.0;
    } else if (salary <= 2000.00) {
        percentual = 7.0;
    } else {
        percentual = 4.0;
    }

    earnedMoney = salary * (percentual / 100.0);
    newSalary = salary + earnedMoney;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << earnedMoney << endl;
    cout << "Em percentual: " << static_cast<int>(percentual) << " %" << endl;

    return 0;
}
