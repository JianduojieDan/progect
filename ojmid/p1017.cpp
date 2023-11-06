#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double spendTime;
    double speed;
    cin >> spendTime >> speed;
    double distance = speed * spendTime;
    double consumption = distance / 12;
    cout << fixed << setprecision(3) << consumption << endl;
    return 0;
}