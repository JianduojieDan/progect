#include<iostream>

using namespace std;

int main () {

int num;

    cout << "Enter a four-digit integer: " << endl;
    cin >> num;

    int dig1 = num/1000;
    int dig2 = (num/100) % 10;
    int dig3 = (num/10) % 10;
    int dig4 = num % 10;

    int sum = dig1 + dig2 + dig3 + dig4;

    cout << "The sum of all digits is " << sum << endl;
    cin >> sum;

    return 0;
}