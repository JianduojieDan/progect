#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int year = num / 365;
    int a = num % 365;
    int month = a / 30;
    int b = a % 30;
    int day = b / 1;
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;
    return 0;
}
