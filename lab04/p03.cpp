#include<iostream>

#include<string>

using namespace std;
int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;
    string msg;
    switch (month) {
        case 1:
            msg = "January";
            break;
        case 2:
            msg = "February";
            break;
        case 3:
            msg = "March";
            break;
        case 4:
            msg = "April";
            break;
        case 5:
            msg = "May";
            break;
        case 6:
            msg = "June";
            break;
        case 7:
            msg = "July";
            break;
        case 8:
            msg = "August";
            break;
        case 9:
            msg = "September";
            break;
        case 10:
            msg = "October";
            break;
        case 11:
            msg = "November";
            break;
        case 12:
            msg = "December";
            break;
        default:
            msg = "Incorrect month number.";
            break;

    }
    cout << msg << endl;

}