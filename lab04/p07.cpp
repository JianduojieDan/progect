#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double x,y;
    cout << "Enter a point with two coordinates: ";
    cin >> x >> y;
    if (sqrt(pow(x,2) - 0) <= (10.0/2) && sqrt(pow(y,2) - 0) <= (5.0/2)){
        cout << fixed << setprecision(1);
        cout << "Point (" << x << ", " << y << ") is in the rectangle" << endl;
    }else {
        cout << fixed << setprecision(1);
        cout << "Point (" << x << ", " << y << ") is not in the rectangle" << endl;
    }
    return 0;
}
