#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a[5] = {};
    for (int i = 0; i < 5;i++){
        cout << "Enter the element at index " << i << ": ";
        cin >> a[i];
    }

    cout << "Before reversing:" << endl;
    for(int i = 0; i < 5;i++){
        cout <<  a[i] << " ";
    }
    cout << endl;

    cout << "After reversing:" << endl;
    for(auto re = rbegin(a); re != rend(a); re++){
        cout << *re << " ";
    }
    return 0;
}
