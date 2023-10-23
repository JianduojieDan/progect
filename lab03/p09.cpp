#include<iostream>

using namespace std;

int main () {
    int x;
    int sum;
    cout << "Enter a three-digit integer: " ;
    cin >> x;
    int dgi1 = x / 100;
    int dgi2 = (x / 10) % 10;
    int dgi3 = x % 10;
    sum = dgi1 + dgi2 + dgi3;
    if (x > 1 && x < 100){
    cout << x << " is not a three-digit number." << endl;
    }if (x > 999) {
        cout << x << " is not a three-digit number." << endl;
    }if (x >= 100 && x <= 999) {
        cout << "The sum of all digits is " << sum << "." << endl;
    }


    return 0;

}