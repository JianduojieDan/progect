#include<iostream>
#include<string>

using namespace std;
int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;
    string msg;
    switch(month){
        case 12:
        case 1:
        case 2:
            msg = "Winter";
            cout << msg << endl;
            break;
        case 3:
        case 4:
        case 5:
            msg = "Spring";
            cout << msg << endl;
            break;
        case 6:
        case 7:
        case 8:
            msg = "Summer";
            cout << msg << endl;
            break;
        case 9:
        case 10:
        case 11:
            msg = "Fall";
            cout << msg << endl;
            break;
        default:
            msg ="Incorrect month number.";
            cout << msg << endl;
            break;
    }
    return 0;
}