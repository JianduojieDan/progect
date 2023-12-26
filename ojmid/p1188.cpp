#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char O;
    const int COLUMN = 12;
    const int ROW = 12;
    double A[ROW][COLUMN];
    double sum = 0.0;
    double average = 0.0;
    int count = 0;
    int N = 12;


    cin >> O;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++) {
            cin >> A[i][j];
        }
    }

    switch (O) {
        case 'S':
            for (int i = 0; i < ROW; i++)
            {
                for(int j = 0 ; j < COLUMN ; j ++)
                {
                    if(i > j && i + j > N - 1)
                    {
                        sum += A[i][j];
                        count++;
                    }
                }
            }
            cout << fixed << setprecision(1) << sum << endl;

            break;
        case 'M':
            sum = 0.0, count = 0;
            for (int i = 0; i < ROW; i++)
            {
                for (int j = 0; j < COLUMN; j++)
                {
                    if (i > j && i + j > N - 1)
                    {
                        sum += A[i][j];
                        count++;
                    }
                }
            }

            average = sum / count;
            cout << fixed << setprecision(1) << average << endl;
            break;
        default:
            cout << "Invalid data" << endl;
            break;
    }

    return 0;
}
