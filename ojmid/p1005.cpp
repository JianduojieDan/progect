#include<iostream>
#include <iomanip>
using namespace std;

int main () {

    float num1,num2;
    cin >> num1 >> num2;
    float MEDIA = (3.5 * num1 + 7.5 * num2)/(3.5 + 7.5);

    cout << fixed << setprecision(5);

    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}