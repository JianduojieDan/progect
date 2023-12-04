#include<iostream>

using namespace std;

int main (){
    double sum = 0.0;
    double count = -1;
    double grade;

    do{
        cout << "Enter the next grade or '0' to exit: ";
        cin >> grade;
        sum += grade;
        count++;
    } while (count < 5 && grade != 0);

    if (count > 1){
            double Tsum = sum / count;
            cout << "The arithmetic mean is " << Tsum << endl;
        }else{
        cout << "Nothing to calculate" <<endl;
    }

    return 0;
}