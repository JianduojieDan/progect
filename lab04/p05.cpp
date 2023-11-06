#include<iostream>

using namespace std;
int main() {
    int year,month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month: ";
    cin >> month;
    int days;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        if (month == 2){
            days = 29;
            cout << "Number of days: " << days << endl;
        }

    }else
    {if (month == 2) {
            days = 28;
            cout << "Number of days: " << days << endl;
        }
    }if (month == 1 || month == 3 || month ==  5 || month == 7 || month == 8 || month == 10 || month == 12){
        days = 31;
        cout << "Number of days: " << days << endl;
    }else if (month == 4 || month == 6 || month == 8 || month == 10){
        days = 30;
        cout << "Number of days: " << days << endl;
    }else{
        if(month != 1 && month != 2  && month != 3 && month != 4 && month != 5 && month != 6 && month != 7 && month != 8 && month != 9 && month != 10 && month != 11 && month != 12 ){
        cout << "Incorrect month number." << endl;
        }
    }
    return 0;
}