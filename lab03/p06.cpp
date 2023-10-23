#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {

float a;
float b;
float c;

cout << "Enter a, b, c: " ;
cin >> a >> b >> c;

float D =  sqrt(pow(b,2) - 4 * a * c);
cout << fixed << setprecision(4) << endl;
if (D > 0) {
    float R1 = ((-b) + D )/(2 * a);
    float R2 = ((-b) - D )/(2 * a);
    cout << "The equation has two roots " << R1 << " and " << R2 <<endl;
}else if (D == 0) {
    float R3 =  ((-b) - 0)/(2 * a);
    cout << "The equation has one root " << R3 << endl;
}else {
    cout << "The equation has no real roots" << endl;
}



return 0;

}