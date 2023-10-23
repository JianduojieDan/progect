#include <iostream>
using namespace std;
int main (){
    int a,b,c, mab;
    cin >> a >> b >> c;
    int maiorAB =(a+b+abs(a-b))/2;
    mab =(maiorAB+c+abs(maiorAB-c))/2;
    cout << mab << " eh o maior" << endl;
    return 0;
}