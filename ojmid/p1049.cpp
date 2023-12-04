#include<iostream>
#include<string>

int main() {
    using namespace std;
    string x;
    string y;
    string z;
    cin >> x >> y >> z;
    if (x == "vertebrado"){
        if (y == "ave") {
            if (z == "carnivoro"){
                cout << "aguia\n";
            }else if(z == "onivoro"){
                cout << "pomba\n";
            }
        }else if (y == "mamifero"){
            if (z == "onivoro"){
                cout << "homem\n";
            }else if (z == "herbivoro"){
                cout <<"vaca\n";
            }
        }
    }else if (x == "invertebrado"){
        if (y == "inseto"){
            if (z == "hematofago"){
                cout << "pulga\n";
            }else if (z == "herbivoro"){
                cout << "lagarta\n";
            }
        }else if(y == "anelideo"){
            if (z == "hematofago"){
                cout << "sanguessuga\n";
            }else if (z == "onivoro"){
                cout << "minhoca\n";
            }
        }
    }

    return 0;
}
