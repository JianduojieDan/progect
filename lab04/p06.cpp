#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float intrest;
    long double a;
    cout << "Enter the amount of the loan: " ;
    cin >> a;
    if (10000 <= a && a <= 100000) {
        intrest = 15.0;
        cout << "The rate of interest: " << intrest << endl;
    }else if (100000 < a && a <= 500000) {
        intrest = 13.5;
        cout << "The rate of interest: " << intrest << endl;
    }else if (500000 < a && a <= 1000000) {
        intrest = 12.5;
        cout << "The rate of interest: " << intrest << endl;
    }else if (1000000 < a && a <= 5000000) {
        intrest = 11.0;
        cout << fixed << setprecision(1) << "The rate of interest: " << intrest << endl;
    }else {
        cout << "Loan cannot be provided."<<endl;
    }
    return 0;
}