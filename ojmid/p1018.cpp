#include<iostream>
using namespace std;
int main(){
    int quant;
    cin >> quant;
    cout << quant << endl;
    int hundred = quant / 100;
    cout << hundred << " nota(s) de R$ 100,00" << endl;
    int x = quant % 100;
    int fifty = x / 50;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    int y = quant % 100 % 50;
    int twenty = y / 20;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    int z = quant % 100 % 50 % 20;
    int ten = z / 10;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    int a = quant % 100 % 50 % 20 % 10;
    int five = a / 5;
    cout << five << " nota(s) de R$ 5,00" << endl;
    int b = quant % 100 % 50 % 20 % 10 % 5;
    int two = b / 2;
    cout << two << " nota(s) de R$ 2,00" << endl;
    int c = quant % 100 % 50 % 20 % 10 % 5 % 2;
    int one = c / 1;
    cout << one << " nota(s) de R$ 1,00" << endl;

    return 0;
}