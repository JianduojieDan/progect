#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main () {

    float num;
    cout << "Enter a real number: " ;
    cin >> num;

    float absoluteValue = abs (num);
    cout << fixed << setprecision(4) << endl;
    cout << "|" << num << "|" << " = " << absoluteValue << std::endl;

    return 0;
}