#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    srand(static_cast<unsigned>(time(0)));
    int num = rand() % 13;
    int suit = rand() % 4;
    cout << "The card you picked is ";
    switch(num){
        case 0:
        cout << "Ace of ";
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << num + 1 << " of ";
        break;
        case 10:
            cout << "Jack of ";
        break;
        case 11:
            cout << "Queen of ";
        break;
        case 12:
            cout << "King of ";
        break;

    }

    switch (suit){
        case 0:
            cout << "Clubs";
            break;
        case 1:
            cout << "Diamonds";
            break;
        case 2:
            cout << "Hearts";
            break;
        case 3:
            cout << "Spades";
            break;
        default:
            cout << "invalid data" << endl;


    }
    cout << endl;


    return 0;
}