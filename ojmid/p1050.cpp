#include<iostream>


int main() {
    using namespace std;

    int x;
    cin >> x;
    if (x == 61){
        cout << "Brasilia\n";
    }else if (x == 71){
        cout << "Salvador\n";
    }else if (x == 11){
        cout << "Sao Paulo\n";
    }else if (x == 21){
        cout << "Rio de Janeiro\n";
    }else if (x == 32){
        cout << "Juiz de Fora\n";
    }else if (x == 19){
        cout << "Campinas\n";
    }else if (x == 27){
        cout << "Vitoria\n";
    }else if (x == 31){
        cout << "Belo Horizonte\n";
    }else {
        cout << "DDD nao cadastrado\n";
    }

    return 0;
}
