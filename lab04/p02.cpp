#include<iostream>
#include<string>
using namespace std;
int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;
    string msg;

    if (month == 1) {
        msg = "January";
        cout << msg << endl;
    } else if (month == 2) {
        msg = "February";
        cout << msg << endl;
    }else if (month == 3) {
        msg = "March";
        cout << msg << endl;
    }else if (month == 4) {
        msg = "April";
        cout << msg << endl;
    }else if (month == 5) {
        msg = "May";
        cout << msg << endl;
    }else if (month == 6) {
        msg = "June";
        cout << msg << endl;
    }else if (month == 7) {
        msg = "July";
        cout << msg << endl;
    }else if (month == 8) {
        msg = "August";
        cout << msg << endl;
    }else if (month == 9) {
        msg = "September";
        cout << msg << endl;
    }else if (month == 10) {
        msg = "October";
        cout << msg << endl;
    }else if (month == 11) {
        msg = "November";
        cout << msg << endl;
    }else if(month == 12){
        msg = "December";
        cout << msg << endl;
    }else{
        msg = "Incorrect month number.";
        cout << msg << endl;
    }
    return 0;
}