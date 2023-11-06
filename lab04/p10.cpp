#include<iostream>
using namespace std;
int main() {
    char letter;
    int num;
    cout << "Enter two characters: ";
    cin >> letter >> num;
    switch(letter){
        case 'M':
            switch(num){
                case 1:
                    cout << "Mathematics Freshman" << endl;
                    break;
                case 2:
                    cout << "Mathematics Sophomore" << endl;
                    break;
                case 3:
                    cout << "Mathematics Junior" << endl;
                    break;
                case 4:
                    cout << "Mathematics Senior" << endl;
                    break;
                default:
                    cout << "Invalid status code" << endl;
                    break;
            }
            break;
        case 'C':
            switch(num){
                case 1:
                    cout << "Computer Science Freshman" << endl;
                    break;
                case 2:
                    cout << "Computer Science Sophomore" << endl;
                    break;
                case 3:
                    cout << "Computer Science Junior" << endl;
                    break;
                case 4:
                    cout << "Computer Science Senior" << endl;
                    break;
                default:
                    cout << "Invalid status code" << endl;
                    break;

            }
            break;
        case 'T':
            switch(num){
                case 1:
                    cout << "Information Technology Freshman" << endl;
                    break;
                case 2:
                    cout << "Information Technology Sophomore" << endl;
                    break;
                case 3:
                    cout << "Information Technology Junior" << endl;
                    break;
                case 4:
                    cout << "Information Technology Senior" << endl;
                    break;
                default:
                    cout << "Invalid status code" << endl;
                    break;
            }
            break;
    }
    return 0;
}
