#include<iostream>

using namespace std;


int main (){
    int x,y,z;

    cout << "Enter three integer numbers: " ;
    cin >> x >> y >> z;
    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }if (x > z){
        int temp = x;
        x = z;
        z = temp;
    }if (y > z){
        int temp = y;
        y = z;
        z = temp;
    }
  cout << x << endl;
    cout << y << endl;
    cout << z << endl;
return 0;
}
