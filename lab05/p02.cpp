#include<iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cout << "Enter an integer: " << endl;
    cin >> num;
    while(num != 0){
       int digit = num % 10;
       sum += digit;
       num /= 10;
    }
    cout << "The sum of all digits is " << sum << "." << endl;
    return 0;
}