#include<iostream>

using namespace std;

int main () {
    int gra;
    std::cout << "Enter the number of points: " ;
    cin >> gra;

    if (90 <= gra && gra <= 100) {
        std::cout << "Grade: A" << std::endl;
    }
    else if(80 <= gra && gra < 90) {
        std::cout << "Grade: B" << std::endl;
    }
    else if(70 <= gra && gra < 80) {
        std::cout << "Grade: C" << std::endl;
    }
    else if(60 <= gra && gra < 70) {
        std::cout << "Grade: D" << std::endl;
    }
    else if(gra > 101) {
        std::cout  << gra << " is not in the permitted range." << std::endl;
    }

    return 0;
}