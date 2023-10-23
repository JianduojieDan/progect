#include <iostream>
#include<string>
using namespace std;

int main () {
    int x;
    int y;
    string msg;
    int z;

    z = (x + y) % 7;
    cout << "Enter today's day: ";
    cin >> x;
    cout << "Enter the number of days elapsed since today: ";
    cin >> y;

    switch (x) {
        case 0:
            msg = "Sunday";
            break;
        case 1:
            msg = "Monday";
            break;
        case 2:
            msg = "Tuesday";
            break;
        case 3:
            msg = "Wednesday";
            break;
        case 4:
            msg = "Thursday";
            break;
        case 5:
            msg = "Friday";
            break;
        case 6:
            msg = "Saturday";
            break;
    }

    cout << "Today is " << msg << " and the future day is ";

    switch (z) {
        case 0:
            msg = "Sunday";
            break;
        case 1:
            msg = "Monday";
            break;
        case 2:
            msg = "Tuesday";
            break;
        case 3:
            msg = "Wednesday";
            break;
        case 4:
            msg = "Thursday";
            break;
        case 5:
            msg = "Friday";
            break;
        case 6:
            msg = "Saturday";
            break;
    }

    cout << msg << endl;

    return 0;
}
