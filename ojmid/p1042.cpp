#include<iostream>
#include<algorithm>

int main() {
    using namespace std;

    int numbers[3];
    cin >> numbers[0] >> numbers[1] >> numbers[2];

    int originalOrder[3];
    copy(begin(numbers), end(numbers), begin(originalOrder));

    sort(numbers, numbers + 3);

    for (int i = 0; i < 3; ++i) {
        cout << numbers[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        cout << originalOrder[i] << endl;
    }

    return 0;
}
