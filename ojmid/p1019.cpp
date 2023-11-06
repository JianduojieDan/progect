#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int x = N / 3600;
    int a = N % 3600;
    int y = a / 60;
    int b = a % 60;
    int z = b;
    cout << x << ":" << y << ":" << z << endl;
    return 0;
}