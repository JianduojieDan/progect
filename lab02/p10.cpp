#include<iostream>
#include<cmath>
#include<iomanip>

using namespace::std;

int main(){

    double sec = 365 * 24 * 60 * 60;
    double pop = 312032486;
    double birth = sec / 7.0;
    double death = sec / 13.0;
    double imm = sec / 45.0;

    double numyears;

    cout << "enter the number of years : ";
    cin >> numyears;

    double population = pop + (numyears* (birth - death +imm));
    double roundPopulation = round(population);
    cout << "The population in 5 years is " << static_cast<int>(roundPopulation) << endl;


    return 0;

}