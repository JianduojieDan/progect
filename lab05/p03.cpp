#include <iostream>
#include <cstdlib>

int main(void) {
    using namespace std;

    srand(42);
    int numOfTest;
    cout << "Number of tests? " << endl;
    cin >> numOfTest;

    int Canswers = 0;
    int ICanswers = 0;
    int i =0;

    while(i++ < numOfTest) {
        int Rnum1 = rand() % 10;
        int Rnum2 = rand() % 10;
        int sum = Rnum1 + Rnum2;
        cout << Rnum1 << " + " << Rnum2 << " = ";
        int result;
        cin >> result;
        cout << result;

        if(result == sum){
            Canswers++;
        }else{
            ICanswers++;
        }
    }
    cout << "Number of correct answers: " << Canswers << endl;
    cout << "Number of incorrect answers: " << ICanswers << endl;


    return 0;
}
