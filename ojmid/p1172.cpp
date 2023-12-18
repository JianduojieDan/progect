#include <iostream>

int main(){
    using namespace std;
    int n;
    for(int i = 0; i < 10; i++){
        cin >> n;
        if(n <= 0) n = 1;
        cout << "X[" << i << "] = " << n << "\n";
    }
    return 0;
}