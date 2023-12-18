#include<iostream>


bool is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_of_month(int year, int month) {
    int days[12] = {31,is_leap(year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31};
    if(month > 0 && month <= 12){
        return days[month - 1];
    } else{
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