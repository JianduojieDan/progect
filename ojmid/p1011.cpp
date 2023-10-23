#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int r;
    const double pi = 3.14159;
    cin >> r;
    double volume = (4/3.0) * pi * r * r * r;
    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    return 0;
}