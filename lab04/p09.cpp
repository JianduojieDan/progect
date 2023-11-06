#include<iostream>
using namespace std;
int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    switch(letter){
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
            cout << "The corresponding number is 2" << endl;
            break;
        case 'd':
        case 'D':
        case 'e':
        case 'E':
        case 'f':
        case 'F':
            cout << "The corresponding number is 3" << endl;
            break;
        case 'g':
        case 'h':
        case 'i':
        case 'G':
        case 'H':
        case 'I':
            cout << "The corresponding number is 4" << endl;
            break;
        case 'j':
        case 'k':
        case 'l':
        case 'J':
        case 'K':
        case 'L':
            cout << "The corresponding number is 5" << endl;
            break;
        case 'M':
        case 'N':
        case 'O':
        case 'm':
        case 'n':
        case 'o':
            cout << "The corresponding number is 6" << endl;
            break;
        case 'p':
        case 'q':
        case 'r':
        case 'P':
        case 'Q':
        case 'R':
        case 's':
        case 'S':
            cout << "The corresponding number is 7" << endl;
            break;
        case 't':
        case 'u':
        case 'v':
        case 'T':
        case 'U':
        case 'V':
            cout << "The corresponding number is 8" << endl;
            break;
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            cout << "The corresponding number is 9" << endl;
        default :
            cout << letter << " is an invalid input" << endl;
            break;

    }
    return 0;
}