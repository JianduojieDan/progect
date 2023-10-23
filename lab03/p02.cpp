#include<iostream>

using namespace std;

int main() {

    int poin;
    std::cout << "Enter the number of points: " ;
    std::cin >> poin;

    const double fail = 0.4;

    if (poin >= 100 * fail){
        std::cout << "You have passed the \"Intro to Programming\" course." << std::endl;
    }
    else{
        std::cout << "You have failed the \"Intro to Programming\" course." << std::endl;
    }

    return 0;

}