#include<iostream>
#include<cmath>

using namespace std;

int main() {

    double r,l;
    const double Pi = 3.14159;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> r >> l;

    double A,V;

    A = pow(r,2) * Pi;
    V=A*l;

    cout << "The area is " << A << endl;
    cout << "The volume is " << V << endl;

    return 0;


}