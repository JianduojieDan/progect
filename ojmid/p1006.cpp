#include<iostream>
#include<iomanip>

using namespace std;
int main () {
    float a,b,c;
    cin >> a >> b >> c;
    float MEDIA = (2.0 * a + 3.0 * b + 5.0 * c)/(2.0 + 3.0 + 5.0);

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;

}