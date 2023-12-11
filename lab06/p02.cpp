#include<iostream>


bool is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_of_month(int year, int month) {
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            return is_leap(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 0;
    }
}
using namespace std;
int main() {
    int year,month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month: ";
    cin >> month;
    int days = get_days_of_month(year, month);
    if (days > 0){
        cout << "Number of days: " << days << endl;
    } else {
        cout << "Incorrect month number." << endl;
    }
    return 0;
}