#include<iostream>
#include<iomanip>

int main (){
    using namespace std;
    int x;
    int y;
    float sum;
    float p;
    cin >> x >> y;

    switch (x) {
        case 1:
            p = 4.00;
            sum = p * y;
            cout << fixed << setprecision(2) << "Total: R$ " << sum << endl;
            break;
        case 2:
            p = 4.50;
            sum = p * y;
            cout << fixed << setprecision(2) << "Total: R$ " << sum << endl;
            break;
        case 3:
            p = 5.00;
            sum = p * y;
            cout << fixed << setprecision(2) << "Total: R$ " << sum << endl;
            break;
        case 4:
            p = 2.00;
            sum = p * y;
            cout << fixed << setprecision(2) << "Total: R$ " << sum << endl;
            break;
        case 5:
            p = 1.50;
            sum = p * y;
            cout << fixed << setprecision(2) << "Total: R$ " << sum << endl;
            break;
        default:
            cout << "Invalid data\n";
            break;
    }
    return 0;
}
