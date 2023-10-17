#include<iostream>
#include<iomanip>

using namespace::std;

int main() {


//p____***p*5#####p*10






    int p = 5;

    int result1 , result2;

    cout << left << setw(5) << "p" << right << setw(6) << "p*5" << right << setw(9) << "p*10" << endl;

    p=10;

    cout << left << setw(5) << p << right << setw(6) << p * 5 << right << setw(9) << p * 10 << endl;

    p=25;

    cout << left << setw(5) << p << right << setw(6) << p * 5 << right << setw(9) << p * 10 << endl;

    p=50;

    cout << left << setw(5) << p << right << setw(6) << p * 5 << right << setw(9) << p * 10 << endl;


    return 0;
}
