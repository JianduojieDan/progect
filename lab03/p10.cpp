#include<iostream>
#include<cmath>
using namespace std;

int main () {
    float x1;
    float x2;
    const float Pi = 3.1415926;

    float Area;
    const float R = 10;
    Area = Pi * pow(R,2);
    cout << "Enter a point with two coordinates: ";
    cin >> x1 >> x2;
    float Distance = sqrt(pow((x1),2) + pow((x2),2));

    if (Distance <= 10.0) {
        cout << "Point (" << x1 << ", " << x2 << ") is in the circle." << endl;
    }else{
        cout << "Point (" << x1 << ", " << x2 << ") is not in the circle." << endl;
    }



    return 0;

}