#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<int> scores(numStudents);
    cout << "Enter the scores: ";
    for (int i = 0; i < numStudents; i++) {
        cin >> scores[i];
    }

    int bestScore = *max_element(scores.begin(), scores.end());

    cout << "Grades: ";
    for (int i = 0; i < numStudents; i++) {
        if (scores[i] >= bestScore - 10) {
            cout << "A ";
        } else if (scores[i] >= bestScore - 20) {
            cout << "B ";
        } else if (scores[i] >= bestScore - 30) {
            cout << "C ";
        } else if (scores[i] >= bestScore - 40) {
            cout << "D ";
        } else {
            cout << "F ";
        }
    }
    cout << endl;

    return 0;
}
