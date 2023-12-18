#include<cstdlib>
#include<iostream>
int main() {
    using namespace std;
    srand(42);
    int a[12] ={0};
    int throws;

    cout << "Enter the number of times to throw two dice: ";
    cin >> throws;
    for(int i = 0;i < throws;i++){
        int Da,Db;
        Da = 1 + rand() % 6;
        Db = 1 + rand() % 6;
        int sum = Da + Db;
        int arrayIndex = sum - 1;
        a[arrayIndex] = a[arrayIndex] + 1;
    }
    for(int i = 1;i < 12;i++){
        cout << "Got " << i + 1 << " on the dice "<< a[i] <<" times.\n";

    }
    return 0;
}