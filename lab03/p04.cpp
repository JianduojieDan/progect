#include<iostream>

using namespace std;
int main () {

    int num;
    std::cout << "Enter the year: " ;
    std::cin >> num;

    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
    {

        std::cout << num <<  " is a leap year." << std::endl;
    }
    else
    {
        std::cout << num << " is not a leap year." << std::endl;
    }

    return 0;
}