#include<iostream>

using namespace std;
bool isEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 20;
    int list1[size], list2[size];
    int size1, size2;

    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    if (size1 != size2) {
        cout << "Two lists are not identical" << endl;
    } else if (isEqual(list1, list2, size1)) {
        cout << "Two lists are identical" << endl;
    } else {
        cout << "Two lists are not identical" << endl;
    }

    return 0;
}
