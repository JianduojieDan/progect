#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int l;
    char op;
    const int COLUMN = 12;
    const int ROW = 12;
    double A[ROW][COLUMN];
    double sum = 0.0;
    double average = 0.0;

    cin >> l;
    cin >> op;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++) {
            cin >> A[i][j];
        }
    }

    switch (op) {
        case 'S':
            for (int i = 0; i < COLUMN; i++) {
                sum += A[l][i];
            }
            cout << fixed << setprecision(1) << sum << endl;
            break;
        case 'M':
            sum = 0.0;
            for (int i = 0; i < COLUMN; i++) {
                sum += A[l][i];
            }
            average = sum / COLUMN;
            cout << fixed << setprecision(1) << average << endl;
            break;
        default:
            cout << "Invalid data" << endl;
            break;
    }

    return 0;
}
