#include<iostream>

int main() {
    using namespace std;

    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    int totalStartMinutes = startHour * 60 + startMinute;
    int totalEndMinutes = endHour * 60 + endMinute;

    int durationInMinutes;

    if (totalStartMinutes < totalEndMinutes) {
        durationInMinutes = totalEndMinutes - totalStartMinutes;
    } else {
        durationInMinutes = 24 * 60 - (totalStartMinutes - totalEndMinutes);
    }

    int durationHours = durationInMinutes / 60;
    int durationMinutes = durationInMinutes % 60;

    cout << "O JOGO DUROU " << durationHours << " HORA(S) E " << durationMinutes << " MINUTO(S)" << endl;

    return 0;
}
