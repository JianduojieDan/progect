#include<iostream>

int main() {
    using namespace std;

    int startTime, endTime;
    cin >> startTime >> endTime;

    int duration;

    if (startTime < endTime) {
        duration = endTime - startTime;
    } else {
        duration = 24 - startTime + endTime;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}
