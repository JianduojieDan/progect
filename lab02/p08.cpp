#include <iostream>
using namespace std;

int main(){

    double pounds, kilo;
    const double pound1 = 0.454;

    cout << "Enter a number in pounds: ";
    cin >> pounds;

    kilo = pounds * pound1;
    cout << pounds << " pounds is " << kilo << " kilograms" << endl;


    return 0;

}