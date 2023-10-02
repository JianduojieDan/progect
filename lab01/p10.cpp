#include<iostream>
#include<cmath>
#include<iomanip>

using namespace::std;

int main()

{

    double sec = 365 * 24 * 60 * 60;

    double pop = 312032486;

    double birth = sec / 7.0;

    double death = sec / 13.0;

    double imm = sec / 45.0;


    double Y1 = pop - death + birth + imm;
    double roundY1 = round(Y1);
    cout << static_cast<int>(roundY1) << endl;

    double Y2 = Y1 + birth - death + imm;
    double roundY2 = round(Y2);
    cout << static_cast<int>(roundY2) << endl;

    double Y3 = Y2 + birth - death + imm;
    double roundY3 = round(Y3);
    cout << static_cast<int>(roundY3) << endl;

    double Y4 = Y3 + birth - death + imm;
    double roundY4 = round(Y4);
    cout << static_cast<int>(roundY4) << endl;

    double Y5 = Y4 + birth - death + imm;
    double roundY5 = round(Y5);
    cout << static_cast<int>(roundY5) << endl;

    return 0;

}