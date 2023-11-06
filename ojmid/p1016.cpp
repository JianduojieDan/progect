#include<iostream>
using namespace std;
int main(){
    int time;
    cin >> time;
    float distanceInMinutes = 0.5;
    int distance = (distanceInMinutes * time) * 4;
    cout << distance << " minutos" << endl;
    return 0;
}
