#include<iostream>
#include<iomanip>

using namespace::std;

int main() {

    int p = 5;

    int result1 , result2;

    cout << setw(10) << "p" << setw(10) << "p * 5" << setw(10) << "p * 10" << endl;

    p=10;

    cout << setw(10) << p << setw(10) << p * 5 << setw(10) << p * 10 << endl;

    p=25;

    cout << setw(10) << p << setw(10) << p * 5 << setw(10) << p * 10 << endl;

    p=50;

    cout << setw(10) << p << setw(10) << p * 5 << setw(10) << p * 10 << endl;


    return 0;
}