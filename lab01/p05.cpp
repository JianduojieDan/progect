#include <iostream>
#include <cmath>
int main() {
    using namespace std;

    double n1,n2;

    cout << "enter first integer :\n" ;
    cin >> n1 ;

    cout << "enter second interger:\n";
    cin >>n2 ;

    cout << n1 << " + " << n2 << "=" << n1 + n2 << endl;
    cout << n1 << " - " << n2 << "=" << n1 - n2 << endl;
    cout << n1 << " * " << n2 << "=" << n1 * n2 << endl;
    cout << n1 << " / " << n2 << "=" << fmod(n1,n2) << endl;
    cout << n1 << " % " << n2 << "=" << fmod(n1,n2) << endl;



return 0;
}

// Created by Administrator on 2023/9/27.
//
