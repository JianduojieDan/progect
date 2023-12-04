#include<iostream>
#include<cmath>
using namespace std;
int main () {
    double result = 2.0;
    result = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    double one = 1.0;
     if (abs(result - one) < 0.0000000001) {
         cout << "Equal\n";
     }else{
         cout <<"Not Equal\n";
     }
     return 0;
}