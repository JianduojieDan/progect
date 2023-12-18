#include <iostream>

int main(){
    using namespace std;
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << n << "\n";
        n *= 2;
    }
    return 0;
}