#include<iostream>
#include<iomanip>

int main() {
    using namespace std;

    float N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    float average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;

        float examScore;
        cin >> examScore;

        average = (average + examScore) / 2.0;

        cout << "Nota do exame: " << examScore << endl;

        if (average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << average << endl;
    }

    return 0;
}
