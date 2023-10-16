#include<iostream>
using namespace std;
int main(){

double feet;
const double FootToMeter = 0.305;

    cout << "Enter a value for feet: " << endl;
    cin >> feet;

    cout << fixed;
    cout.precision(4);
    double meters = feet * FootToMeter ;
    cout << feet << " feet is " << meters << " meters" << endl;

    return 0;



}