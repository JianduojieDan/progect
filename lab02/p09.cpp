#include<iostream>

using namespace std;

int main() {
    const int MinutesPerDay = 24 *60;
    const int minutesPerYear = 365 *  MinutesPerDay;

    cout << "Enter the number of minutes: ";
    long minutes;
    cin >> minutes;

    long years = minutes / minutesPerYear;
    long remainingMinutes = minutes % minutesPerYear;
    int days = remainingMinutes / MinutesPerDay;

    cout << minutes << "minutes is approximately " << years << " years and " << days << " days " << endl;

    return 0;

}
